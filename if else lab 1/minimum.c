#include<stdio.h>

main()
{
	int a;
	int b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	if(a<b)
	{
	  printf("a is minimum");	
	}
	else
	{
     	printf("b is minimum");	 	
	}
}