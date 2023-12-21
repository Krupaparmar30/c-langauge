#include<stdio.h>

main()
{
    int i=1;
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    for(i=10;i>=1;i--)
    {
    	printf("%d x %d=%d\n",n,i,n*i);
	}
}