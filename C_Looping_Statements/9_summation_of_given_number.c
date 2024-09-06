#include<stdio.h>
main()
{
	int d,n,sum=0;
	
	printf(" Enter the Number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		d = n % 10;
		sum += d;
    	n /= 10;
		  
	}
	printf(" Summation of digit is: %d",sum);
}
