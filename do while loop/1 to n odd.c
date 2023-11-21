#include<stdio.h>

main()
{
	int x=1;
	int n;
    printf("enter the value of n:");
    scanf("%d",&n);
	do
	{
//	 printf("%d\n",x);
       if(x%2==1)
       {
       	 printf("%d\n",x);
       	 
	   }
	   x++;
	}while(x<=n);
	
}