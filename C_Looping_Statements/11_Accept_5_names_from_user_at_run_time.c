#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	i=0;
	
	printf("_______________Enter Five Names__________________");
	while(i<5)
	{
		printf("\n Name %d: ",i+1);
		scanf("%s",&name[i]);		
    }   
    
    prinf("_______________Display Five Names__________________");
    
   	while(i<5)
	{
		printf("\n Name %d: %s ",name[i],i+1);
		i++;
    }
}
