#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter number :");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		printf("\n %d * %d = %d", n, i, n*i);
		i++;  
	}
}
