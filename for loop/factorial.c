#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
    int f=1;
    for(x=1;x<=n;x++)
    {
    	f=f*x;
    	
	}
	printf("%d",f);
}