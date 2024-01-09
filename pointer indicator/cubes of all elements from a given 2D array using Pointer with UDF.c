#include<stdio.h>
//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
//For example,
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5 
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//9   4
//25 64

main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int n1;
	printf("enter the value of n1:");
	scanf("%d",&n1);
	int ans;
	int a[n][n1];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("enter the value of a[%d][%d]",i,j);
		   scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
		  int *ptr=&a[i][j];
		  int ans=*ptr * *ptr * *ptr;
	      printf("%d\n",ans);

		}
	}
	
}