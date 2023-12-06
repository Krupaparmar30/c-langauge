#include<stdio.h>

main()
{
//	 Wap to find minimum from the 1d array.

   int n;
   printf("enter the value of sizeof array:");
   scanf("%d",&n);
   int max=0;
   int i;
   int a[n];
   for(i=0;i<n;i++)
   {
   	printf("enter the value ofa[%d]:",i);
   	scanf("%d",&a[i]);
   	
   }
   
   for(i=0;i<n;i++)
   {
   	if(a[n]>=max)
   	{
   	 max=a[i];	
	   }
   }
   printf("%d",max);
   
   
   }