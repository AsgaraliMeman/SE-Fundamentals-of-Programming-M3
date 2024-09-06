#include<stdio.h>
main()
{
	int i, n, t1=0, t2=1, next_term;
	
	printf(" Enter the number of terms: ");
	scanf("%d",&n);
	
	printf(" Fibonacci Series: "); 
	
	i=1;
	while(i<=n)
	{
	    next_term = t1 + t2;
		printf(" %d,", t1);
		t1 = t2;
		t2 = next_term;
		
		i++;
	}
}
