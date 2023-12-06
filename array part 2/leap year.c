#include<stdio.h>

main()
{
//	Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.

   int x;
   int y;
   printf("enter the value of x:");
   scanf("%d",&x);
   printf("enter the value of y:");
   scanf("%d",&y);
   int i;
   
   int  a[x];
   for(i=x;i<=y;i++)
   {
   	if(i%4==0)
   	{
   		printf("%d ",i);
	   }
   }
   


}
