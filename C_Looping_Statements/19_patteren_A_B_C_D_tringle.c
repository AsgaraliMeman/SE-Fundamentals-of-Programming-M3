#include<stdio.h>
main()
{
	int r, c;
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			
			printf("%c",'A' - 1 + c);
			
			c++;
		}
		printf("\n");
		r++;
		
	}
}
