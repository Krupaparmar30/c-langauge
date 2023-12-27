#include<stdio.h>



int factorial(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f*factorial(f-1);
}
main()
{

	int n;
	printf("enter the value of n:");
	scanf("%d",&n);   
	 printf("%d",factorial(n));

 
 
}