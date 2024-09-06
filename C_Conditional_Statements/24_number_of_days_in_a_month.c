#include<stdio.h>
main()
{
	int m;
	printf(" Enter Month Number: ");
	scanf("%d",&m);
	
	if(m==1)
	  printf(" This Month has 31 days ");
		  
	else if(m==2)
	  printf(" This Month has 28 or 29 days ");
	  
	else if(m==3)
	  printf(" This Month has 31 days ");  
	
	else if(m==4)
	  printf(" This Month has 30 days ");
	  
	else if(m==5)
	  printf(" This Month has 31 days");  
	  
	else if(m==6)
	  printf(" This Month has 30 days "); 
	  
	else if(m==7)
	  printf(" This Month has 31 days ");
	  
	else if(m==8)
	  printf(" This Month has 31 days "); 
	  
	else if(m==9)
	  printf(" This Month has 30 days ");  
	  
	else if(m==10)
	  printf(" This Month has 31 days ");          
	
	else if(m==11)
	  printf(" This Month has 30 days ");
	  
	else if(m==12)
	  printf(" This Month has 31 days ");
	  
	else    
	  printf("\n Ente A valid month Number!!!.");
}

