#include<stdio.h>

main()
{
//	 8. wap to printf multiplication table of 1 to 10.

   int x=1;
   int i;
   int n;
   printf("enter the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	
   	for(x=1;x<=10;x++)
    {
   	  printf("%d * %d=%d\n",i,x,i*x);
    }
    printf("\n");
   }
   
}