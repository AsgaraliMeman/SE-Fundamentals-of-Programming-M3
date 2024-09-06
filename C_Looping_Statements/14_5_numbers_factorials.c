#include<stdio.h>
main() 
{
    int i,j,num;
    
    for (i = 0; i < 5; i++) 
	{
    printf("Enter number %d: ", i + 1);
    scanf("%d", &num);
    long fact = 1;
    for (j = 1; j <= num; j++) 
    {
       fact *= j;
    }
    printf("Factorial of %d: %ld\n", num, fact);
    }
}
