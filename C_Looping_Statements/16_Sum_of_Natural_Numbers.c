#include <stdio.h>
int main() 
{
    int n,i; 
    long sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    i = 1;
    while (i <= n) 
	{
        sum += i;
        i++;
    }

    printf("\n Sum of natural numbers up to %d: %ld", n, sum);

}
