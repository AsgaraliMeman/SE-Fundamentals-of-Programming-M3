#include<stdio.h>
main()
{
	int n,fd,ld,sum;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	//find the first digit
	fd=n;
	
	//find the last digit
	ld=n%10;
	
	while(fd>=n)
	{
	 	fd/=n;
	}
	
	sum=fd+ld;
	
	printf("Sum of first and lastdigit: %d",sum);
}
