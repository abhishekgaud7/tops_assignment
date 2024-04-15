#include <stdio.h>
#include <math.h>
main() 
{
    double principal, rate;
    int time, compoundFreq;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in decimal form): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%d", &time);

    printf("Enter the frequency of compounding per year: ");
    scanf("%d", &compoundFreq);

	double calculateCompoundInterest(double principal, double rate, int time, int compoundFreq) {
    double amount;
    double compoundRate = rate / compoundFreq;
    int n = compoundFreq * time;
    amount = principal * pow((1 + compoundRate), n);
    return amount;
}
	
    double amount = calculateCompoundInterest(principal, rate, time, compoundFreq);

    printf("The amount after %d years with compound interest is: $%.2f\n", time, amount);
}

