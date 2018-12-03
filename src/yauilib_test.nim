###
### NimYauilib - Yet another UI library for Nim using SDL2 
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com>
###

import sdl2/sdl,
       sdl2/sdl_ttf as ttf
import geo

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

  while sdl.pollEvent(addr(e)) != 0:

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


########
# MAIN #
########

var
  app = App(window: nil, renderer: nil)
  done = false
  pressed: seq[sdl.Keycode] = @[]

if init(app):
  var
    font, outlinedFont: ttf.Font
    textColor = sdl.Color(r: 0xFF, g: 0xFF, b: 0xFF)
    bgColor = sdl.Color(r: 0x30, g: 0x30, b: 0x30)

  font = ttf.openFont("assets/VeraMono.ttf", 16)
  if font == nil:
    sdl.logCritical(sdl.LogCategoryError,
                    "Can't load font: %s",
                    ttf.getError())
    
  while not done:
    # Clear screen with draw color
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

    # s = outlinedFont.renderUTF8_Blended("Outlined text", textColor)
    # discard app.renderer.render(s, 10, 150)
    # sdl.freeSurface(s)

    # Update renderer
    app.renderer.renderPresent()

    done = events()

# Shutdown
exit(app)
