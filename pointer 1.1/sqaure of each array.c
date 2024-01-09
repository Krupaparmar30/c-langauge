#include<stdio.h>

main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int i;
	int a[n];
   
	
	int ans;
	for(i=0;i<n;i++)
	{
		printf("enter the size of array  a[%d]:",i);
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int *ptr=&a[i];
		int ans=*ptr * *ptr;
		printf("%d\n",ans);
	}
}