###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
### 

import sdl2/sdl,
       math
       
import geo

import ui, color

proc init*(circle: ui.Circle): ui.Circle =
  circle.sur = createRGBSurface(RLEACCEL, (circle.radius.int*2)+1, (circle.radius.int*2)+1, 32, 0,0,0,0)
  discard circle.sur.setColorKey(1, 0)
  let ren = circle.sur.createSoftwareRenderer()
  discard ren.setRenderDrawColor(circle.rgba.r, circle.rgba.g, circle.rgba.b, circle.rgba.a)

  var
    points: seq[sdl.Point] = @[]
    pivot = XY(x: 0, y: 0)
    center = XY(x: circle.radius, y: circle.radius)
    quad_rad = circle.radius ^ 2

  for i in 0..<(circle.radius.int*2+1):
    for j in 0..<(circle.radius.int*2+1):
#      echo quad_dst(center, pivot), pivot
      if quad_dst(center, pivot) < quad_rad:
        points.add sdl.Point(x: pivot.x.int, y: pivot.y.int)
      pivot.x += 1
    pivot.y += 1
    pivot.x = 0

  discard ren.renderDrawPoints(points[0].addr, points.len)
  return circle

proc update*(circle: ui.Circle) =
  return

proc draw*(circle: ui.Circle, renderer: sdl.Renderer) =
  var rect = sdl.Rect(x: circle.pos.x.toInt, y: circle.pos.y.toInt, w: circle.sur.w, h: circle.sur.h)
  var texture = renderer.createTextureFromSurface(circle.sur)
  discard renderer.renderCopy(texture, nil, rect.addr)
  destroyTexture(texture)
