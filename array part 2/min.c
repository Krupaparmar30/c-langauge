#include<stdio.h>

main()
{
//	Wap to find maximum from the 1d array.


   int n;
   printf("enter the size of array:");
   scanf("%d",&n);
   
   int a[n];
   int min;
   int i;
   
   for(i=0;i<n;i++)
   {
   	printf("enter the value of a[%d]:",i);
   	scanf("%d",&a[i]);
	   
   }
   
   for(i=0;i<n;i++)
   {
   	if(a[n]<=min)
   	{
   	min=a[i];
	   }
	   
   }
   printf("%d",min);
}