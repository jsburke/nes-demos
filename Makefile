
games:
	@mkdir games

games/%.nes: games
	$(MAKE) -C ./src/$* all
	@mv ./src/$*/$*.nes $@

.PHONY: clean
clean:
	@find . -name "*.o"   -type f -delete
	@find . -name "*.map" -type f -delete
	@rm -rf games
