#include<stdio.h>

 main()
{  
// Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
	int i,n1,n2,k=0;
	
	printf("Enter the size n1 : ");
	scanf("%d",&n1);
	printf("Enter the size  n2: ");
	scanf("%d",&n2);
	
	int a[n1],b[n2];
	int n3 = n1+n2;
	int c[n3];
	
	for(i=0; i<n1; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n2; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	for(i=n1; i<n3; i++)
	{
		c[i] = b[k];
		k++;
	}
	printf("\n");
	for(i=0; i<n3; i++)
	{
		printf("%d ",c[i]);
	}
}