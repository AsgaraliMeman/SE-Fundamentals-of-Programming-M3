#include<stdio.h>
main()
{
	int n,rem,sum=0;
	
	printf(" Enter any Number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem = n % 10;
		sum = (sum * 10)+rem;
		n= n / 10;
	}
	printf(" Reverse no= %d",sum);
}
