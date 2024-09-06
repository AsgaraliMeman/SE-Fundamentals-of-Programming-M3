#include<stdio.h>
main()
{
	int a, b, c;
	printf(" Enter numbers 1: ");
	scanf("%d",&a);
	
	printf(" Enter numbers 2: ");
	scanf("%d",&b);
	
	c=a+b;
	printf(" Sum of two number: %d",c);
	printf("\n Size of c : %d bytes.",sizeof(c));
}
