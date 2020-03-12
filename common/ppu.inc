;;
;;  Common use PPU related addresses, code, and tools
;;

  ;; Addresses on the Main Memory Map
  ;; PPU addresses

PPU_CTRL   = $2000
PPU_MASK   = $2001
PPU_STATUS = $2002
PPU_SCROLL = $2005
PPU_ADDR   = $2006
PPU_DATA   = $2007

  ;; OAM Addresses

OAM_ADDR   = $2003
OAM_DATA   = $2004
OAM_DMA    = $4014

  ;; Addresses on the PPU internal Memory Map
  ;; Accessed by PPU or CPU via PPU_ADDR and PPU_DATA

LEFT_PATTERN_TABLE_START  = $0000
LEFT_PATTERN_TABLE_END    = $0FFF

RIGHT_PATTERN_TABLE_START = $1000
RIGHT_PATTERN_TABLE_END   = $1FFF

NAME_TABLE_0_START        = $2000
NAME_TABLE_0_END          = $23FF

NAME_TABLE_1_START        = $2400
NAME_TABLE_1_END          = $27FF

NAME_TABLE_2_START        = $2800
NAME_TABLE_2_END          = $2BFF

NAME_TABLE_3_START        = $2C00
NAME_TABLE_3_END          = $2FFF

NAME_MIRROR_0_START       = $3000
NAME_MIRROR_0_END         = $33FF

NAME_MIRROR_1_START       = $3400
NAME_MIRROR_1_END         = $37FF

NAME_MIRROR_2_START       = $3800
NAME_MIRROR_2_END         = $3BFF

NAME_MIRROR_3_START       = $3C00  ;; note this mirror is fractured
NAME_MIRROR_3_END         = $3EFF  ;; continues below

PPU_BG_COLORS_START       = $3F00
PPU_BG_COLORS_END         = $3F0F

PPU_SPRITE_COLORS_START   = $3F10
PPU_SPRITE_COLORS_END     = $3F1F

NAME_MIRROR_3_GAP_START   = $3F20
NAME_MIRROR_3_GAP_END     = $3FFF

  ;; Object Attribute Memory Arrays
  ;; Accessed through OAM_ADDR, OAM_DATA, and OAM_DMA
  ;; All of these are the start points or 4 byte arrays
  ;; Increase by 4, 8, or C to get to further points

OAM_POINT_Y               = $00
OAM_TILE_NUM              = $01
OAM_SPRITE_ATTR           = $02
OAM_POINT_X               = $03


.macro vblank_wait_loop
  : bit PPU_STATUS
    bpl :- ;; back to top
.endmacro
