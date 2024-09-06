#include<stdio.h>
main()
{
	int phy, chem, maths, total, total_math_phy;
	
	printf(" Enter Physics Marks: ");
	scanf("%d",&phy);
	
	printf(" Enter Chemistry Marks: ");
	scanf("%d",&chem);
	
	printf(" Enter Maths Marks: ");
	scanf("%d",&maths);
	
	total = maths + phy + chem;
    total_math_phy = maths + phy;
	
	printf("\n Total marks of Maths, Physics and Chemistry: %d",total);
	
	printf("\n Total marks of Maths and Physics: %d",total_math_phy);
	
	if (maths >= 65 && phy >= 55 && chem >= 50 && (total >= 190 || total_math_phy >= 140)) 
        printf("The candidate is eligible for admission.\n");
     else 
        printf("The candidate is not eligible.\n");
    
}
