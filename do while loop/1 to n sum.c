#include<stdio.h>

main()
{
	int x=1;
	int sum=0;
	int n;
    printf("enter the value of n:");
    scanf("%d",&n);
	do
	{
		sum=sum+x;
		
		x++;	
	}while(x<=n);
	printf("%d",sum);
}