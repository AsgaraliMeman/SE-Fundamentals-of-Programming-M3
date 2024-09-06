#include<stdio.h>
int main() 
{
    int years, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    printf("\n  years is equal to %d:", years);
    
    days = years * 365;
    printf("\n  days : %d", days);
    
    years = days  / 365;
    printf("\n  years : %d", years);

	
}
