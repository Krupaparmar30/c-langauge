#include<stdio.h>

main()
{
//	Q.3 Write a Program to perform the addition operation of two 1D arrays & and store it in another array. Keep in mind that both array sizes must be the same.
	int n,i,sum=0;
	
	printf("enter the size od array:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
	  printf("enter the value a[%d]= ",i);
	  scanf("%d",a[i]);	
	}
	printf("\n");
	
	int b[n];
	for(i=0;i<n;i++)
	{
	  printf("enter the value b[%d]= ",i);
	  scanf("%d",b[i]);	
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		sum=b[i]+a[i];
		printf("the sum of array a[%d]+b[%d]\n",i,i,sum);
	}
}