.PHONY: clean All

All:
	@echo "----------Building project:[ carpet_cleaning - Debug ]----------"
	@cd "Project2" && "$(MAKE)" -f  "carpet_cleaning.mk"
clean:
	@echo "----------Cleaning project:[ carpet_cleaning - Debug ]----------"
	@cd "Project2" && "$(MAKE)" -f  "carpet_cleaning.mk" clean
