
GAMES = hello zero
TARGS = $(addprefix games/,$(addsuffix .nes,$(GAMES)))

games:
	@mkdir games

games/%.nes: games
	$(MAKE) -C ./src/$* all
	@mv ./src/$*/$*.nes $@

.PHONY: all
all:
	make $(TARGS)

.PHONY: clean
clean:
	@find . -name "*.o"   -type f -delete
	@find . -name "*.map" -type f -delete
	@rm -rf games
