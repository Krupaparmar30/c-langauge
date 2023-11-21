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
       if(n%2==0)
       {
       	 printf("%d\n",n);
       	 
	   }
	   n--;
	}while(n>=x);
	
}