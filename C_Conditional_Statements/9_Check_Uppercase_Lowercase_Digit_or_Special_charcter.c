#include<stdio.h>
main()
{
		char ch;
	
	printf("Enter any character :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	  printf("\n %c is Uppercase later",ch);
	  
	else if(ch>='a' && ch<='z')
	  printf("\n %c is Lowercase later",ch);  
	  
	else if(ch>='0' && ch<='9')
	  printf("\n %c is a Digit",ch);
	  
	else
	   printf("\n %c is a Spesial character"); 
	  
	
	  
}
