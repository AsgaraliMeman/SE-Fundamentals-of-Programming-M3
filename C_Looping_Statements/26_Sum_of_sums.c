#include<stdio.h>
main() 
{
    int i,n,sum=0,total=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++) 
	{
    sum += i;
    total += sum;
    }

    printf("\n Sum of sums: %d", total);

}
