###
### NimYauilib - Yet another UI library for Nim using SDL2 
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com>
###

import sdl2/sdl,
       sdl2/sdl_ttf as ttf,
       colors,
       os

import geo,
       ui,
       point,
       line,
       color,
       circle,
       rect,
       text

const
  Title = "Yauilib Test"
  ScreenW = 800 # Window width
  ScreenH = 600 # Window height
  WindowFlags = 0
  RendererFlags = sdl.RendererAccelerated or sdl.RendererPresentVsync


type
  App = ref AppObj
  AppObj = object
    window*: sdl.Window # Window pointer
    renderer*: sdl.Renderer # Rendering state pointer

  FpsManager = ref FpsManagerObj
  FpsManagerObj = object
    counter, fps: int
    timer: sdl.TimerID


proc init(app: App): bool =
  # Init SDL
  if sdl.init(sdl.InitVideo) != 0:
    echo "ERROR: Can't initialize SDL: ", sdl.getError()
    return false

    # Init SDL_TTF
  if ttf.init() != 0:
    sdl.logCritical(sdl.LogCategoryError,
                    "Can't initialize SDL_TTF: %s",
                    ttf.getError())

  app.window = sdl.createWindow(
    Title,
    sdl.WindowPosUndefined,
    sdl.WindowPosUndefined,
    ScreenW,
    ScreenH,
    WindowFlags)
  if app.window == nil:
    echo "ERROR: Can't create window: ", sdl.getError()
    return false

  # Create renderer
  app.renderer = sdl.createRenderer(app.window, -1, RendererFlags)
  if app.renderer == nil:
    echo "ERROR: Can't create renderer: ", sdl.getError()
    return false

  # Set draw color
  if app.renderer.setRenderDrawColor(0x00, 0x00, 0x00, 0x00) != 0:
    echo "ERROR: Can't set draw color: ", sdl.getError()
    return false

  echo "SDL initialized successfully"
  return true

# Render surface
proc render(renderer: sdl.Renderer,
            surface: sdl.Surface, x, y: int): bool =
  result = true
  var rect = sdl.Rect(x: x, y: y, w: surface.w, h: surface.h)
  # Convert to texture
  var texture = sdl.createTextureFromSurface(renderer, surface)
  if texture == nil:
    return false
  # Render texture
  if renderer.renderCopy(texture, nil, addr(rect)) == 0:
    result = false
  # Clean
  destroyTexture(texture)


proc events(): bool =
  result = false
  var e: sdl.Event
  if sdl.pollEvent(addr(e)) != 0:

    # Quit requested
    if e.kind == sdl.Quit:
      return true

    # Key pressed
    elif e.kind == sdl.KeyDown:
      # Show what key was pressed
      sdl.logInfo(sdl.LogCategoryApplication, "Pressed %s", $e.key.keysym.sym)

    # Exit on Escape key press
    if e.key.keysym.sym == sdl.K_Escape:
      return true

# Shutdown sequence
proc exit(app: App) =
  app.renderer.destroyRenderer()
  app.window.destroyWindow()
  sdl.quit()
  echo "SDL shutdown completed"



##############
# FPSMANAGER #
##############

# FPS timer
# param is FpsManager casted to pointer
proc fpsTimer(interval: uint32, param: pointer): uint32 {.cdecl.} =
  let obj = cast[FpsManager](param)
  obj.fps = obj.counter
  obj.counter = 0
  return interval


proc newFpsManager(): FpsManager = FpsManager(counter: 0, fps: 0, timer: 0)


proc free(obj: FpsManager) =
  discard sdl.removeTimer(obj.timer)
  obj.timer = 0


proc fps(obj: FpsManager): int {.inline.} = return obj.fps


proc start(obj: FpsManager) =
  obj.timer = sdl.addTimer(1000, fpsTimer, cast[pointer](obj))


proc count(obj: FpsManager) {.inline.} = inc(obj.counter)
  

########
# MAIN #
########

var
  app = App(window: nil, renderer: nil)
  done = false
  pressed: seq[sdl.Keycode] = @[]

if init(app):
  var
#    fpsMgr = newFpsManager()
#    delta = 0.0 # Time passed since last frame in seconds
    ticks: uint64  = sdl.getPerformanceCounter()# Ticks counter
    freq = sdl.getPerformanceFrequency() # Get counter frequency
#    fpsLimiter = 60 # FPS limit value
    
    font, outlinedFont: ttf.Font
    textColor = sdl.Color(r: 0xFF, g: 0xFF, b: 0xFF)
    bgColor = sdl.Color(r: 0x30, g: 0x30, b: 0x30)
    point = ui.Point(pos: XY(x:300, y:300), rgba: colorToRGBA(colBlue))
    line = ui.Line(pos: [XY(x:100, y:100), XY(x:0, y:0)], weight: 10, rgba: colorToRGBA(colGreen)).init
    circle = ui.Circle(pos: XY(x:300, y:100), radius: 30, rgba: colorToRGBA(colPink)).init
    rect = ui.Rect(pos: XY(x:10, y:400), size: XY(x:40, y:100), rgba: colorToRGBA(colSkyBlue), border: true).init
    text = ui.Text(pos: XY(x:100, y:100), val: "hello", point: 32, weight: 1, forergba: colorToRGBA(colRed)).init
    global_surface = createRGBSurface(0, 800, 600, 32, 0,0,0,0)

#  fpsMgr.start()
  
  font = ttf.openFont("assets/VeraMono.ttf", 16)
  if font == nil:
    sdl.logCritical(sdl.LogCategoryError,
                    "Can't load font: %s",
                    ttf.getError())
    
  while not done:
    # Clear screen with draw color
    discard app.renderer.setRenderDrawColor(0,0,0,0)
    if app.renderer.renderClear() != 0:
      echo "Warning: Can't clear screen: ", sdl.getError()

    var s: sdl.Surface

    s = font.renderUTF8_Solid("Solid text", textColor)
    discard app.renderer.render(s, 10, 10)
    sdl.freeSurface(s)

    s = font.renderUTF8_Shaded("Shaded text", textColor, bgColor)
    discard app.renderer.render(s, 10, 30)
    sdl.freeSurface(s)

    s = font.renderUTF8_Blended("Blended text", textColor)
    discard app.renderer.render(s, 10, 50)
    sdl.freeSurface(s)

    s = font.renderUTF8_Blended_Wrapped(
      "This is really long line of text.", textColor, 150)
    discard app.renderer.render(s, 10, 90)
    sdl.freeSurface(s)

    point.draw(app.renderer)
    line.draw(app.renderer)
    circle.draw(app.renderer)
    rect.draw(app.renderer)
    text.draw(app.renderer)

    # s = outlinedFont.renderUTF8_Blended("Outlined text", textColor)
    # discard app.renderer.render(s, 10, 150)
    # sdl.freeSurface(s)

#    os.sleep(1000)
    # var texture = sdl.createTextureFromSurface(app.renderer, global_surface)
    # var rect = sdl.Rect(x: 0, y: 0, w: 800, h: 600)
    # discard app.renderer.renderCopy(texture, nil, addr(rect))
    # destroyTexture(texture)


    # Update renderer
    app.renderer.renderPresent()

    done = events()

#    fpsMgr.count()


     # Limit FPS
    let elapsed_ms = (sdl.getPerformanceCounter() - ticks).int * 1000 / freq.int
    echo elapsed_ms
    let spare = 16 - elapsed_ms.int
    sdl.delay(1)
    # if spare > 0:
    #   sdl.delay(spare.uint32)

    # Get frame duration
    ticks = sdl.getPerformanceCounter()

#  free(fpsMgr)
  ttf.closeFont(font)

# Shutdown
exit(app)
