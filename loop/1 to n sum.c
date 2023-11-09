#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int sum=0;
	while(x<=n)
	{
	  sum=sum+x;
	  x++;	
		
	}
	printf("sum is %d",sum);
}
