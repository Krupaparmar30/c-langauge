#include<stdio.h>

main()
{
	int i=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int sum=0;
	
	i:
	sum=sum+i;
	i++;
	if(i<=n)
	{
		goto i;
	}
	printf("%d",sum);
}