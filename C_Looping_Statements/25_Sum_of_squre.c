#include <stdio.h>
main() 
{
    int i,n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++) 
	{
      sum += i * i;
    }

    printf("\n Sum of squares: %d", sum);

}
