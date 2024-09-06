#include <stdio.h>

int main() {
    int numbers[10],evensum=0,oddsum=0,evennumber=0,oddnumber=0;
    int i;

    printf(" Enter 10 integers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < 10; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{
            evennumber++;
            evensum += numbers[i];
        } else 
		{
            oddnumber++;
            oddsum += numbers[i];
        }
    }

    printf("\n Count of even numbers: %d", evennumber);
    printf("\n Count of odd numbers: %d", oddnumber);
    printf("\n Sum of even numbers: %d", evensum);
    printf("\n Sum of odd numbers: %d", oddsum);

}

