#include <stdio.h>
main() 
{
  int i,j,size = 5;

  for (i=1;i<=size;i++) 
  {
    for (j=0;j<i;j++) 
	{
      printf("*");
    }
    printf("\n");
  }
  
  for (i=1;i<=size-1;i++) 
  {
    for (j=0;j<size-i;j++) 
	{
      printf("*");
    }
    printf("\n");
  }
}
