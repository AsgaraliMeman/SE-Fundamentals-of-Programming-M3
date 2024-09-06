#include<stdio.h>
int main() 
{
    int minutes,seconds,hours;

    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    
    printf("\n  minutes is equal to %d:", minutes);
    
    seconds = minutes * 60;
    printf("\n  seconds: %d", seconds);
    
    hours = minutes / 60;
    printf("\n  hours : %d", hours);

	
}
