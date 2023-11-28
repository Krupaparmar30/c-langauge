#include<stdio.h>

main()
{
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

   int i,j;
   int k=1;
   for(i=5;i>=1;i--)
   {
   	for(j=5;j>=i;j--)
   	{
   	 printf("%d ",k);
   	 k++;
	
	   }
	 
	   printf("\n");
   }
}