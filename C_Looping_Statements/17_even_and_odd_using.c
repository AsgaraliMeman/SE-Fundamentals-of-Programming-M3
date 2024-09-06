#include <stdio.h>
main() 
{
    int num,i,evennum=0,oddnum=0;
    
    i=0;
    while (i < 5) 
	{
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) 
            evennum++;
        
		else 
            oddnum++;

        i++;
    }

    printf("\n Number of even numbers: %d", evennum);
    printf("\n Number of odd numbers: %d", oddnum);

}

