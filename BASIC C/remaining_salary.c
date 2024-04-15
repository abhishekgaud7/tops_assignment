#include<stdio.h>
main()
{
	float salary,remaining_salary,insurance,loan_installment;
	
	printf("Enter the salary:");
	scanf("%f",&salary);
	
	insurance =0.1 *salary;
	
	remaining_salary =salary - insurance;
	
	loan_installment = 0.1 * remaining_salary;
	
	remaining_salary -=loan_installment;
	
	printf("Insurance premium (10%%): $%.2f\n", insurance);
    printf("Loan installment (10%%): $%.2f\n", loan_installment);
    printf("Remaining salary after deductions: $%.2f\n", remaining_salary);	
	
}
