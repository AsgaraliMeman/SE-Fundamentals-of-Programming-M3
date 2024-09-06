#include<stdio.h>
int main() 
{
    int years, days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    printf("\n  years is equal to %d:", years);
    
    days = years * 365;
    printf("\n  days : %d", days);
    
    months = years * 12;
    printf("\n  months : %d", months);

	
}
