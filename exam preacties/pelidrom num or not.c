#include<stdio.h>

main()
{
	int revers=0;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int rem;
	int ans=n;
	while(n!=0)
	{
		rem=n%10;
		revers=revers*10+rem;
		n/=10;
	}
	if(ans==revers)
	{
		printf("this is pelidrom");
	}
	else
	{
		printf("this is not pelidrom");
	}
	
     
	
	
}