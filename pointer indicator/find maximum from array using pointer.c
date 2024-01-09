
#include<stdio.h>
//q3. wap to find maximum from array using pointer.
main()
{
	int n;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	int i,j;
	int a[n];
  

	int max=0;
	int *ptr1=&max;
	for(i=0;i<n;i++)
	{
		printf("enter the size of array  a[%d]:",i);
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int *ptr=&a[i];
		
		if(*ptr>*ptr1)
		{
			*ptr1=*ptr;
		}
	}
	
	printf("maximum  is %d",*ptr1);
}