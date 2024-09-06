#include<stdio.h>
main()
{
	int i,n,sum;
	
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	for(i=-1;i<=n;i++)
    {
		sum=sum+=i;
	}	
	printf("sum of number: %d",sum);
	
}
