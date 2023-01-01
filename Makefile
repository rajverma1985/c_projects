.PHONY: clean All

All:
	@echo "----------Building project:[ guess_the_number - Debug ]----------"
	@cd "Project_1_learning" && "$(MAKE)" -f  "guess_the_number.mk"
clean:
	@echo "----------Cleaning project:[ guess_the_number - Debug ]----------"
	@cd "Project_1_learning" && "$(MAKE)" -f  "guess_the_number.mk" clean
