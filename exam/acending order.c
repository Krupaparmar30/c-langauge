#include<stdio.h>

main()
{
//	5. Write a program in C to set the array in acending order.
 int n;
   printf("enter the size of array:");
   scanf("%d",&n);
   int i,j;
   int a[n];
   for(i=0;i<n;i++)
   {
   	 printf("enter the array :");
   	 scanf("%d",&a[i]);
   	 
   }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{ 
   		if(a[i]<a[j])
   		{
   			int temp;
   			temp=a[i];
   			a[i]=a[j];
   			a[j]=temp;
		   }
	   }
   }
   for(i=0;i<n;i++)
   {
   	printf("%d",a[i]);
   }
}