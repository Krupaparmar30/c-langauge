#include<stdio.h>
main()
{
	int i,j,space;
	
	for(i=1;i<=5;i++)
	{
		for(space=1;space<i;space++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}