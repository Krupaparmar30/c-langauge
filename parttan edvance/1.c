#include<stdio.h>

main()
{
	int i,j;
	int c=1,z=1;
	int k=1;
	
	for(i=1;i<=10;i++)
	{
		for(c=1;c<i;c++)
		{
			printf(" - ");
		}
		for(j=i;j<=10;j++)
		{
			printf(" %d ",k);
			k=k+j;
		}
		for(j=9;j>=i;j--)
		{
			printf(" %d ",k);
			k=k+j;
		}
		z=z+i;
		k=i+z;
		printf("\n");
	}
}