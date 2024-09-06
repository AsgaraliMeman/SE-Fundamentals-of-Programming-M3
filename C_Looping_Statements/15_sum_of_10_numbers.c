#include<stdio.h>
main()
{
    int i,sum,num;
	sum = 0;
    i=1;
	while (i <= 10) 
	{
      printf("Enter number %d: ", i);
      scanf("%d", &num);
      sum += num;
      i++;
    }
    printf("\n Sum: %d", sum);

}

