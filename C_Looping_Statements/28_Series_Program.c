#include <stdio.h>
main() 
{
    int i,num,a=1;
    
    printf("\n Enter any Number: ");
    scanf("%d",&num);
    
    i=1;
    
    while(i<=num)
    {
    	if(i%2==0)
    	   a*=2;
    	   
    	else
		   a*=1.5;
		 
		 printf(" %d",a);
		 i++;    
	}
}
