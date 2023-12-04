#include<stdio.h>

main()
{
	int i,j;
	
	int k=9/2+1;
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
		   if(j==k||j==9-k+1)
		   {
		   	printf("*");
			   }
			   else
			   {
			   	printf(" ");
				   }	
		}
		if(i<=9/2)
		{
		k--;	
		}
		else
		{
		k++;	
		}
		printf("\n");
	}
	
}