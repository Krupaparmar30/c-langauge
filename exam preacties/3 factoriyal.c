#include<stdio.h>

main()
{
	int n=3;
	int factorial=1;
	int x=1;
	while(x<=n)
	{
		factorial=factorial*x;
		x++;
	}
	printf("The factorial of 3 is : %d",factorial);
}