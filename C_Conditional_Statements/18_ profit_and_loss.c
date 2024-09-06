#include<stdio.h>
main()
{
	int sprice,cprice,profit,loss;
	
	printf(" Enter Cost Price: ");
	scanf("%d",&cprice);
	
	printf("\n Enter Selling Price: ");
	scanf("%d",&sprice);
	{
	   if(sprice>cprice)
       {
	      profit=sprice-cprice;
	      printf(" Profit is: %d",profit);
       }   
	   else if (cprice>sprice)
	   {
	       loss=cprice-sprice;
	       printf(" Loss is: %d",loss);		
	}
	  
       else
	   printf(" No Profit!! No Loss!!");
    }
}
