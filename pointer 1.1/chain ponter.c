#include<stdio.h>

main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	int *ptr=&a;
	int **ptr1=&ptr;
	int ***ptr2=&ptr1;
	
	printf("%d",***ptr2);
}