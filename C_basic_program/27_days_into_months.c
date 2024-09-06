#include<stdio.h>
int main() 
{
    int days ,months;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    printf("\n  days is equal to %d:", days);
    
    months = days/30;
    printf("\n  months : %d", months);
}
