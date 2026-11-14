#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;
    int n;

    // Input values from the user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert rate from percentage to decimal
    rate = rate / 100.0;

    // Calculate total amount: A = P * (1 + r/n)^(n*t)
    amount = principal * pow((1 + rate / n), (n * time));

    // Calculate compound interest: CI = A - P
    compoundInterest = amount - principal;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Total Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
