#include<stdio.h>

main()
{
	int x=1;
	int f=1;
	int n;
    printf("enter the value of n:");
    scanf("%d",&n);
	do
	{
		f=f*x;
		
		x++;	
	}while(x<=n);
	printf("%d",f);
}