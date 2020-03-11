

include ../../include.mk
include proj.mk

#SRCS = vectors.s65 nrom.s65
SRCS = $(shell find . -name "*.s65")
OBJS = $(patsubst %.s65,%.o,$(SRCS))
ROOT = ../..

all: $(REQS)
	make $(NES)
