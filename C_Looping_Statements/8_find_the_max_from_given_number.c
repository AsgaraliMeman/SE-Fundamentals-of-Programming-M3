#include<stdio.h>
main()
{
	int d,n,max;
	
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		d= n % 10;
		if(d>max)
		
		   max=d;
		  
		n /= 10;
		  
	}
	printf("\n Maximum digit is: %d",max);
}
