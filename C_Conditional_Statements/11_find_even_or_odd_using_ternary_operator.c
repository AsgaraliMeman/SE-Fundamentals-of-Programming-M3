#include<stdio.h>
main()
{
	int n;
	 
	printf("Enter a number :");
	scanf("%d",&n);
	
	
	printf("\n %d is %s ",n,(n % 2 ==0)?"even":"odd");
	
}
