#include<stdio.h>
main()
{
   int a, b, select;
	
	printf("\n Enter Number 1 :");
	scanf("%d",&a);
	printf("\n Enter Number 2 :");
	scanf("%d",&b);
	
	printf("\n ");
	printf("\n Press 1 for Addition");
	printf("\n Press 2 for Subtraction");
	printf("\n Press 3 for Multiplication");
	printf("\n Press 4 for Division");
	
	printf("\n");
	printf("\n Select operation :");
	scanf("%d",&select);

	if(select==1)
		printf("\n Addition  = %d", a+b);
		
	else if(select==2)
		printf("\n subtraction  = %d", a-b);
	
	else if(select==3)	
		printf("\n Multiplication  = %d", a*b);

	else if(select==4)
		printf("\n Division  = %d", a/b);
	
	else
		printf("\n Invalid selection! Try again.");

}
