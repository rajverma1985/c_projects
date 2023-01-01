.PHONY: clean All

All:
	@echo "----------Building project:[ Project_1_learning - Debug ]----------"
	@cd "Project_1_learning" && "$(MAKE)" -f  "Project_1_learning.mk"
clean:
	@echo "----------Cleaning project:[ Project_1_learning - Debug ]----------"
	@cd "Project_1_learning" && "$(MAKE)" -f  "Project_1_learning.mk" clean
