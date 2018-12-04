###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
### 

import sdl2/sdl,
       math

import ui, color

proc init*(point: ui.Point) =
  return

proc update*(point: ui.Point) =
  return

proc draw*(point: ui.Point, renderer: sdl.Renderer) =
  discard renderer.setRenderDrawColor(point.rgba.r, point.rgba.g, point.rgba.b, point.rgba.a)
  discard renderer.renderDrawPoint(point.pos.x.toInt, point.pos.y.toInt)
