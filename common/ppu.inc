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

PPU_BG_COLORS             = $3F00
PPU_SPRITE_COLORS         = $3F10

.macro vblank_wait_loop
  : bit PPU_STATUS
    bpl :- ;; back to top
.endmacro
