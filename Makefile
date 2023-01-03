.PHONY: clean All

All:
	@echo "----------Building project:[ SalaryCalculator - Debug ]----------"
	@cd "SalaryCalculator" && "$(MAKE)" -f  "SalaryCalculator.mk"
clean:
	@echo "----------Cleaning project:[ SalaryCalculator - Debug ]----------"
	@cd "SalaryCalculator" && "$(MAKE)" -f  "SalaryCalculator.mk" clean
