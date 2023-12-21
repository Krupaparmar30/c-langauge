#include<stdio.h>

main()
{
	
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int count=0;
	
	while(n!=0)
	{
		n/=10;
		count++;
	}
	printf("%d",count);
}