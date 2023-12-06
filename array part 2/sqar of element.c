#include<stdio.h>

main()
{
//	 Write a Program to find square of each element from the given array.

   int n;
   printf("enter the value of n:");
   scanf("%d",&n);
   
   int i;
   int a[n];
   int ans[n];
   
   for(i=0;i<n;i++)
   {
   	printf("enter the value of a[%d]:",i);
   	scanf("%d",&a[i]);
   	
   }
   for(i=0;i<n;i++)
   {
   	printf("a[%d]:%d \n",i,a[i]);
   }
   
   for(i=0;i<n;i++)
   {
   	ans[n]=a[i]*a[i];
   	printf("%d ",ans[n]);
   }






}