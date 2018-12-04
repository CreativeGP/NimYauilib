###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
### 

import colors, sdl2/sdl

type
  RGBA* = ref object
    r*, g*, b*, a*: uint8

proc colorToRGBA*(col: colors.Color): RGBA =
  let rgb = col.extractRGB()
  return RGBA(r:rgb[0], g:rgb[1], b:rgb[2], a:0x00)

proc RGBAToColor*(rgba: RGBA): colors.Color =
  return cast[colors.Color]((uint32(rgba.r) shl 16) + (uint32(rgba.g) shl 8) + uint32(rgba.b))

proc RGBAToSdl*(rgba: RGBA): sdl.Color =
  return sdl.Color(r: rgba.r, g: rgba.g, b: rgba.b, a: rgba.a)
