#include<stdio.h>
int main() 
{
    float fahrenheit,celsius;
    printf("Enter the fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    printf("\n fahrenheit is equal to %.2f:",fahrenheit);
    
    celsius = (fahrenheit - 32)*5.0/9.0;
	printf("\n celsius: %.2f", celsius);
}
