#include<stdio.h>

main()
{
	
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int count=0;
	
	int last=n%10;

	
	while(n>9)
	{
		n/=10;
		count++;
	
	}
	printf("%d",n+last,count);
}