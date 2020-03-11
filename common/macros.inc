
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                                             ;;
;; store double writes two bytes               ;;
;; to a given address.                         ;;
;; many NES device registers need 16 bits      ;;
;; written to them over two stores             ;;
;;                                             ;;
;; tramples A                                  ;;
;;                                             ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

.macro store_double data, addr
  lda #<data
  sta addr
  lda #>data
  sta addr
.endmacro

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                                             ;;
;;  self_jump -- keep jumping to same jump     ;;
;;                                             ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

.macro self_jump
 : jmp :-
.endmacro
