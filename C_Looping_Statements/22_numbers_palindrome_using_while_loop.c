#include <stdio.h>
main() 
{
	int i,num,rev,temp;
     
	i = 1;
    while (i <= 3) 
	{
	rev=0;
    printf("Enter number %d: ", i);
    scanf("%d", &num);
    temp = num;

    while (temp) 
	{
     rev= rev*10+temp%10;
     temp /= 10;
    }
    printf("%d is %s palindrome\n", num, (num == rev) ? "" : "not a");
    i++;
   }
}
