#include<stdio.h>
main()
{
	int i, n, fact;
	
	printf(" Enter a number to print factorial : ");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		fact=fact*i;
		printf("\n Number : %d   Fact : %d", i, fact);
		i++; 
	}

}
