#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(x<=n)
	{
		if(x%2==1)
		
		{
			printf("%d\n",x);
		  
		}
		x++;
		
	}
}
