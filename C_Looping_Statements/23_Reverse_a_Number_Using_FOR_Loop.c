#include<stdio.h>
main() 
{
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) 
	{
        reverse = reverse * 10 + num % 10;
    }

    printf("\n Reversed number: %d", reverse);
}

