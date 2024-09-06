#include <stdio.h>
main() 
{
    float basic_salary, gross_salary, HRA, DA;

    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic_salary);

    
    if (basic_salary <= 10000)
	 {
        DA = basic_salary * 0.8;
        HRA = basic_salary * 0.2;
     } 
	
	else if (basic_salary <= 20000)
	 {
        DA = basic_salary * 0.9;
        HRA = basic_salary * 0.25;
     }
	  
	else
	 {
        DA = basic_salary * 0.95;
        HRA = basic_salary * 0.3;
     }

    gross_salary = basic_salary + HRA + DA;

    printf("\n Gross Salary of Employee = %.2f", gross_salary);
    
}

