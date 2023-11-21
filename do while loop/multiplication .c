#include<stdio.h>

main()
{
	int x=1;

	int n;
    printf("enter the value of n:");
    scanf("%d",&n);
	do
	{
		printf("%d*%d=%d\n",n,x,n*x);
		
		x++;	
	}while(x<=10);

}