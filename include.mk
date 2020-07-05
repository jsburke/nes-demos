
AS     = ca65
LD     = ld65
DEBUG ?= 0

#################################################
##                                             ##
##  Directories for source and building        ##
##                                             ##
#################################################

ROOT   ?= .
COMMON ?= $(ROOT)/common
IMAGES ?= $(ROOT)/img

#################################################
##                                             ##
##  Flags and options for building             ##
##                                             ##
#################################################

AS_FLAGS  = -I$(COMMON) --bin-include-dir $(IMAGES)

ifeq ($(DEBUG),1)
AS_FLAGS += -g
endif

#################################################
##                                             ##
##  Common targets                             ##
##                                             ##
#################################################

%.o: %.s65
	$(AS) $(AS_FLAGS) -o $@ $<

%.nes: %.o
	$(LD) -o $@ -C $*.cfg -m $*.map $(REQS)
