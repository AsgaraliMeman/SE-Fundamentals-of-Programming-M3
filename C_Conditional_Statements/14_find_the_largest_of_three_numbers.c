#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter Three number: \n");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a>b && a>c)
	  printf("%d is largest number",a);
	
	else if(b>a && b>c)
	  printf("%d is largest number",b);
	  
	else
	   printf("%d is largest number",c);
	  
}

