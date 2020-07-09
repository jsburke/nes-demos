;;
;;  Common use for nes controllers
;;

  ;; Addresses to work with controllers

CONTROLLER_1  = $4016
CONTROLLER_2  = $4017

BUTTON_RIGHT  = 1 << 0
BUTTON_LEFT   = 1 << 1
BUTTON_DOWN   = 1 << 2
BUTTON_UP     = 1 << 3
BUTTON_START  = 1 << 4
BUTTON_SELECT = 1 << 5
BUTTON_B      = 1 << 6
BUTTON_A      = 1 << 7

  ;; Macro to read player 1


  ;; Macro to read player 1

.macro player1_read buttons
  lda #$01
  sta CONTROLLER1
  lsr a
  sta CONTROLLER1
  : lda CONTROLLER1
    lsr a
    rol buttons
    bcc :-
.endmacro
