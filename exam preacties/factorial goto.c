#include<stdio.h>

main()
{
	int i=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int f=1;
	
	i:
	f=f*i;
	i++;
	if(i<=n)
	{
		goto i;
	}
	printf("%d",f);
}