#include<stdio.h>

main()
{
	int i=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("%d",sum);
}