;; 
;;  NES Common use constants and addresses
;;
;;    common addresses and constants used for the nes ppu
;;

.global main, nmi_handler, irq_handler, reset_handler

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

  ;; APU addresses
  ;;   most of these are bits or bit vectors
  ;;   in a given register at the address

  ;; PULSE1 from $4000 to $4003

  ;; $4000 set as follows
  ;; DDLE_VVVV

PULSE1_DUTY            = $4000
PULSE1_LENGTH_CNT_HALT = $4000
PULSE1_ENVELOPE_FLAG   = $4000
PULSE1_VOLUME          = $4000

  ;; $4001 set as follows
  ;; EPPP_NSSS

PULSE1_SWEEP_ENABLE    = $4001
PULSE1_SWEEP_PERIOD    = $4001
PULSE1_SWEEP_NEGATE    = $4001
PULSE1_SWEEP_SHIFT     = $4001

  ;; $4002 all to same function

PULSE1_LO_TIMER        = $4002

  ;; $4003 set as follows
  ;; LLLL_LHHH

PULSE1_LENGTH_CNT_LOAD = $4003
PULSE1_HI_TIMER        = $4003

  ;; PULSE2 from $4004 to $4007

  ;; $4004 set as follows
  ;; DDLE_VVVV

PULSE2_DUTY            = $4004
PULSE2_LENGTH_CNT_HALT = $4004
PULSE2_ENVELOPE_FLAG   = $4004
PULSE2_VOLUME          = $4004

  ;; $4005 set as follows
  ;; EPPP_NSSS

PULSE2_SWEEP_ENABLE    = $4005
PULSE2_SWEEP_PERIOD    = $4005
PULSE2_SWEEP_NEGATE    = $4005
PULSE2_SWEEP_SHIFT     = $4005

  ;; $4006 all to same function

PULSE2_LO_TIMER        = $4006

  ;; $4007 set as follows
  ;; LLLL_LHHH

PULSE2_LENGTH_CNT_LOAD = $4007
PULSE2_HI_TIMER        = $4007

  ;; TRIANGLE at $4008, $400A, and $400B

TRI_LENGTH_CNT_HALT    = $4008
TRI_CNT_RELOAD         = $4008

TRI_LO_TIMER           = $400A

TRI_LENGTH_CNT_LOAD    = $400B
TRI_HI_TIMER           = $400B

  ;; NOISE at $400C, $400E, and $400F

  ;; $400C as follows
  ;; xxLC_NNNN

NOISE_LENGTH_CNT_DISABLE = $400C
NOISE_CONSTANT_VOLUME    = $400C
NOISE_ENVELOPE_PEREIOD   = $400C

  ;; $400E as follows
  ;; Lxxx_PPPP

NOISE_LOOP               = $400E
NOISE_PERIOD             = $400E

  ;; $400F as follows
  ;; LLLL_Lxxx

NOISE_LENGTH_CNT_LOAD    = $400F

  ;; DMC covers $4010 to $4013 and $4015 and $4017

  ;; $4010 is ILxx_FFFF

DMC_IRQ_ENABLE           = $4010
DMC_LOOP_SAMPLE          = $4010
DMC_FREQ_IDX             = $4010

DMC_DIRECT_LOAD          = $4011

DMC_SAMPLE_ADDR          = $4012

DMC_SAMPLE_LENGTH        = $4013

  ;; $4015 is xxxD_NT21 in write mode

APU_CTRL                 = $4015 ;; general name
APU_CTRL_ENABLE          = $4015
APU_CTRL_NOISE           = $4015
APU_CTRL_TRI             = $4015
APU_CTRL_PULSE2          = $4015
APU_CTRL_PULSE1          = $4015

  ;; $4015 is IFxD_NT21 in read mode

APU_STATUS               = $4015 ;; general name
APU_STATUS_IRQ           = $4015
APU_STATUS_FRAME_IRQ     = $4015
APU_STATUS_LENGTH_CNT    = $4015
APU_STATUS_NOISE         = $4015
APU_STATUS_TRI           = $4015
APU_STATUS_PULSE2        = $4015
APU_STATUS_PULSE1        = $4015

  ;; $4017 is MIxx_xxxx

APU_FRAME_CNT_MODE       = $4017
APU_FRAME_CNT_IRQ_BLOCK  = $4017
