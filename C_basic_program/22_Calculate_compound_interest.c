
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate  ");
    scanf("%f", &rate);

    printf("Enter time : ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Amount after %f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compound_interest);

}

