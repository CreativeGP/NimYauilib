###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
### 

import colors

type
  RGBA* = ref object
    r*, g*, b*, a*: uint8

proc colorToRGBA*(col: Color): RGBA =
  let rgb = col.extractRGB()
  return RGBA(r:rgb[0], g:rgb[1], b:rgb[2], a:0x00)

proc RGBAToColor*(rgba: RGBA): uint32 =
  return (uint32(rgba.r) shl 16) + (uint32(rgba.g) shl 8) + uint32(rgba.b)
