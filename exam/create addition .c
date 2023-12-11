#include<stdio.h>

main()
{
//	4. Write a program to get two array and create addition of array position wise.
//    ex: A= 1,2,3 B=5,6,7 answer = 6,8,10

   int n;
   printf("enter the size of array:");
   scanf("%d",&n);
   int i;
   int a[n];
   int c[n];

   for(i=0;i<n;i++)
   {
   	printf("enter the array a[%d]:",i);
   	scanf("%d",&a[i]);
   }
   printf("\n");
   int b[n];
   for(i=0;i<n;i++)
   {
   	printf("enter the array b[%d]:",i);
   	scanf("%d",&b[i]);
   }
   
   
    for(i=0;i<n;i++)
   {
      c[i]=a[i]+b[i];
   }
   
    for(i=0;i<n;i++)
   {
      printf("%d ",c[i]);
   }
   
}