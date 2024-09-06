#include<stdio.h>
main()
{
	float height;
	
	printf(" Enter Person height :");
	scanf("%f",&height);
	
	if(height<150)
	  printf("\n Person is dwarf");
	 
	else if(height>=150 && height<=165)
	   printf("\n Person is short");
	   
	else if(height>=165 && height<=180)
	   printf("\n Person is avrage");
	   
	else if(height>=180 && height<=195)
	   printf("\n Person is tall"); 
	   
	else
	    printf("\n Person is very tall");
		        
}
