###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
###

import math

type
  XY* = object
    x*: float
    y*: float


proc debug*(a: XY) =
  echo "(", a.x, ", ", a.y, ")"

proc `+`*(a: XY, b: XY): XY =
  return XY(x: a.x+b.x, y: a.y+b.y)

proc `-`*(a: XY, b: XY): XY =
  return XY(x: a.x-b.x, y: a.y-b.y)

proc `/`*(a: XY, b: float): XY =
  return XY(x: a.x / b, y: a.y / b)

proc `*`*(a: XY, b: float): XY =
  return XY(x: a.x * b, y: a.y * b)

proc abs*(a: XY, b: XY): XY =
  return XY(x: abs(a.x-b.x), y: abs(a.y-b.y))

proc quad_dst*(a: XY, b: XY): float =
  return (a.x-b.x)^2 + (a.y-b.y)^2

proc dst*(a: XY, b: XY): float =
  return quad_dst(a, b).sqrt

proc slope*(a: XY, b: XY): float =
  return (a.y - b.y) / (b.x - a.x)
