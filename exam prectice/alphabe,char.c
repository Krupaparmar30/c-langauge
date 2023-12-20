#include<stdio.h>

main()
{
     char a;
	printf("enter the value of a:");
	scanf("%c",&a);
	
	if(a>='A'&&a<='Z'||a>='a'&&a<='z')
	{
		printf("this is alphabets");
	
	}
	else if(a>=49&&a<=57)
	{
		printf("this is digit");
	}
	else
	{
		printf("this is spacial char");
	}
}
