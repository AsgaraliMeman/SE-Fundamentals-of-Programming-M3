#include<stdio.h>
main()
{
	int a,b,c,min;
	
	printf("Enter Three number: \n");
	scanf("%d %d %d",&a, &b, &c);
	
	min = (a<b)?(a<c?a:c):(b<c?b:c);
	printf("\n mainimum number is: %d",min);
}
