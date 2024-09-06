#include<stdio.h>
main()
{
	int i, n, fact;
	
	printf(" Enter a number: ");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		fact=fact*i;
		i++;  
	}
	printf("\n Factorial of : %d = %d", n, fact);
	
}
