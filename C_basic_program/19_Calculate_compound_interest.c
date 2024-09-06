#include<stdio.h>
#include<math.h>
int main() 
{
    float principal,time,rate,
	compound_interest,amount;    
    printf("\n Enter the principal :" );
    scanf("%f",&principal);
    printf("\n Enter the  Time : ");
    scanf("%f",&time);
    printf("\n Enter the Rate : ");
    scanf("%f",&rate);
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;
    printf("\n Compound Interest = %.3f", compound_interest);
}
