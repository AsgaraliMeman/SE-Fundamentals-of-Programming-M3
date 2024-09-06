#include<stdio.h>
main()
{
	int cid,units;
	char cname[20];
	float billamount,surcharge;

	printf(" Enter Custemer Id: ");
	scanf("%d",&cid);
	
	printf(" Enter Custemer Name: ");
	scanf("%s",&cname);
	
	printf(" Enter Consumed Units: ");
	scanf("%d",&units);
	
	if(units <= 350)
	  billamount = units * 1.20;
	  
	else if(units >= 350 && units <= 600)
       billamount = units * 1.50;
	   
	else if(units >= 600 && units <= 800)
       billamount = units * 1.80;
	   
	else if (units >= 800)
	   billamount = units * 2.00;
	  
	  
	 if (billamount >= 800) 
        surcharge = billamount * 0.18;  
        
    billamount += surcharge; 
	
	 if (billamount < 256) 
          billamount = 256; 
		
	printf("\n ______________________Electricity Bill___________________");
	
	printf("\n Custermer Id: %d",cid);	 
	printf("\n Custermer Name: %s",cname);
	printf("\n Consumed Units: %d",units);
	printf("\n Total Bill Amounts are Paid: %.2f",billamount);
	        		
}
