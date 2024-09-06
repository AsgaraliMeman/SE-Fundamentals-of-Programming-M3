#include<stdio.h>
main()
{
    int r, c;
	int a=1;
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf(" %d ",a);
			c++;
			a++;
		}
		printf("\n");
		r++;
	}
}
