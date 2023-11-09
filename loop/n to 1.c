#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(n>=x)
	{
		printf("%d",n);
		n--;
	}
}
