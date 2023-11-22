#include<stdio.h>

main()

{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int sum=0;
	
	for(x=1;x<=n;x++)
	{
		sum=sum+x;
	}
	printf("%d",sum);
}