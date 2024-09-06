#include <stdio.h>
#include <math.h>
main() 
{
    int num, onum,sum,digit,dcount,temp;
    sum = 0;
    dcount = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    onum = num;

    for (temp = num; temp != 0; temp /= 10) 
	{
        dcount++;
    }

    for (temp = num; temp != 0; temp /= 10)
	 {
        digit = temp % 10;
        sum += pow(digit, dcount);
     }

    if (sum == onum) 
        printf("%d is an Armstrong number.\n", onum);
        
    else 	
        printf("%d is not an Armstrong number.\n", onum);

}

