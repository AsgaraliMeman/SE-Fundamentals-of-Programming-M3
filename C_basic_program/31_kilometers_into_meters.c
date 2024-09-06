#include<stdio.h>
int main() 
{
    int kilometers,meters;
    printf("Enter the kilometers: ");
    scanf("%d", &kilometers);
    
    printf("\n kilometers is equal to %d:",kilometers);
    
    meters = kilometers * 1000;
	printf("\n meters: %d", meters);
}
