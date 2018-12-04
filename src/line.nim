###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
### 
###

import sdl2/sdl,
       sdl2/sdl_gfx_rotozoom as rz,
       math,
       colors

import ui, color, geo

proc init*(line: ui.Line): ui.Line =
  return line

proc update*(line: ui.Line) =
  return

proc draw*(line: ui.Line, ren: sdl.Renderer) =
  for i in 0..line.weight:
    discard ren.setRenderDrawColor(line.rgba.r, line.rgba.g, line.rgba.b, line.rgba.a)
    discard ren.renderDrawLine(line.pos[0].x.toInt + ((i+1) mod 2 - i mod 2) * (i/2).int, line.pos[0].y.toInt,
                               line.pos[1].x.toInt + ((i+1) mod 2 - i mod 2) * (i/2).int, line.pos[1].y.toInt)
