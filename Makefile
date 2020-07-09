
GAMES = hello zero controller
TARGS = $(addprefix games/,$(addsuffix .nes,$(GAMES)))

.PHONY: default
default: all

games:
	@mkdir games

games/%.nes: games
	$(MAKE) -C ./src/$* all
	@mv ./src/$*/$*.nes $@

.PHONY: all
all:
	make $(TARGS)

.PHONY: rebuild
rebuild:
	make clean
	make all

.PHONY: clean
clean:
	@find . -name "*.o"   -type f -delete
	@find . -name "*.map" -type f -delete
	@rm -rf games
