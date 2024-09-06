#include<stdio.h>
main()
{
	float e1,e2,e3,e4,e5,total,avrage_expense;
	printf("\n Enter expense : ");
	scanf("%f",&e1);
	printf("\n Enter expense : ");
	scanf("%f",&e2);
	printf("\n Enter expense : ");
	scanf("%f",&e3);
	printf("\n Enter expense : ");
	scanf("%f",&e4);
	printf("\n Enter expense : ");
	scanf("%f",&e5);
	total=e1+e2+e3+e4+e5;
	avrage_expense=total/5;
	printf("\n Avrage expense : %.2f",avrage_expense);
}
