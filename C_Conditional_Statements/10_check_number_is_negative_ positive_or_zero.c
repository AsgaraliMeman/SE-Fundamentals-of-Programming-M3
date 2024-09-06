#include<stdio.h>
main()
{
	int n;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	if(n>0)
	  printf("\n %d is positive number",n);
	  
	else if(n<0)
	  printf("\n %d is nagative number",n);
	
	else 
	  printf("\n %d is zero",n);
}
