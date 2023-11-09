#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int f=1;
	while(x<=n)
	{
	  f=f*x;
	  x++;	
		
	}
	printf("f is %d",f);
}
