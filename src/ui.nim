###
### NimYauilib - Yet another UI library for Nim using SDL2
### 
### Dec 12 2018
### Author: CreativeGP<cretgp.com> 
###

import color,
       sdl2/sdl,
       sdl2/sdl_ttf as ttf
import geo

type
  UIType* = enum
    utNone,
    utContainer,
    utPoint, utLine, utCircle, utRect, utOval, utPolygon, utText, utImage,
    utButton, utDropDownList, utTable, utNuber, utScrollBar, utTab, utTextInput, utTextBox, utToggle

  UI*  = ref object of RootObj
    ty*: UIType
    sur*: sdl.Surface

  Container* = ref object of UI
    pos*: XY
    contents*: seq[UI]
    scroll*: bool

  Point* = ref object of UI
    pos*: XY
    rgba*: RGBA

  Line* = ref object of UI
    pos*: array[2, XY]
    weight*: int
#    edge_ty*: 
    rgba*: RGBA
    
  Circle* = ref object of UI
    pos*: XY
    radius*: float
    rgba*: RGBA

  Oval* = ref object of UI
    pos*: XY
    radius*: XY
    rgba*: RGBA
  
  Polygon* = ref object of UI
    pos*: seq[XY]
    rgba*: RGBA
  
  Rect* = ref object of UI
    pos*: XY
    size*: XY
    rgba*: RGBA
    border*: bool
  
  Text* = ref object of UI
    pos*: XY
    val*: string
    font*: ttf.Font
    point*: int
    weight*: int
    forergba*: RGBA
    backrgba*: RGBA

  Image* = ref object of UI
    pos*: XY
    scale*: XY
    # data...
    
