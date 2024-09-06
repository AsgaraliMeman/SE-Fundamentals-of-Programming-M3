#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter any character :");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	  printf("\n  Character %C is volwel",ch);
	
	else
	  printf("\n  Character %C is not a volwel",ch);
}
