
#include <stdio.h>

int main() {
    int n,i;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        if (i % 2 == 0) 
            sum -= (float)i / (i + 1);
         
		else 
            sum += (float)i / (i + 1);
    }

    printf("\n Sum of the series: %.6f", sum);

}


