#include<stdio.h>
int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a+sum(a-1);
}
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
   printf("%d",sum(n));	
}