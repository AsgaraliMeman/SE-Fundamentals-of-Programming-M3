#include<stdio.h>
main()
{
	int a,b,c,max;
	
	printf("Enter Three number: \n");
	scanf("%d %d %d",&a, &b, &c);
	
	max = (a>b)?(a>c?a:c):(b>c?b:c);
	printf("\n maximum number is: %d",max);
}
