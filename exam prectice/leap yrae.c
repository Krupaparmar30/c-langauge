#include<stdio.h>

main()
{
	int x;
	printf("enter the value of x:");
	scanf("%d",&x);
	
	int y;
	printf("enter the value of y:");
	scanf("%d",&y);
	
	int total;
	
	
	total=y-x;
	int a=(total/4)+1;
	printf("leap year is %d to %d:",x,y,a);
	
	
}
