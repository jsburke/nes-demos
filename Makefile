
EMU       ?= fceux
EMU_FLAGS ?= --fullscreen

build-%:
	$(MAKE) -C ./src/$* all

play-%: build-%
	$(EMU) $(EMU_FLAGS) ./src/$*/$*.nes

test-%:
	make clean
	make play-$*

.PHONY: clean
clean:
	@find . -name "*.o"   -type f -delete
	@find . -name "*.nes" -type f -delete
	@find . -name "*.map" -type f -delete
