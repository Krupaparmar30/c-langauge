#include<stdio.h>

main()
{
	int i=1;
	int x=28;
	
	int sum=0;
	
	for(i=1;i<=x;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
					sum=sum+i;
		}
	}
	printf("sum is %d ",sum);
}