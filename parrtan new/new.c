#include<stdio.h>

main()
{
	int i,j;
	int x=93571;
	
	for(i=1;i<=5;i++)
	{
		printf("%d\n",x);
		x/=10;
	}
}