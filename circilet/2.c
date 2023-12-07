#include<stdio.h>

main()
{
//11
//12 13
//14 15 16
//17 18 19 20
//21 22 23 24 25

 int i,j;
   int k=11;
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