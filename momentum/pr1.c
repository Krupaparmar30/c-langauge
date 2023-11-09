#include<stdio.h>

main()
{
	char b;
	printf("enter any character:");
	scanf("%c",&b);
	
	if(b>='A' && b<='Z'||b>='a' && b<='z')
	{
		printf("this is alphabet");
	}
	else if(b>=49 && b<=57)
	{
		printf("this is digit");
	}
	else
	{
		printf("this is special character");
	}
}