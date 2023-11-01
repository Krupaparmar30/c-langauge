#include<stdio.h>

main()
{
	int x=10;
	int y=12;
	printf("%d",(!(x<=y&&x!=y)||(x>=y)&&(x<=y)||(x!=0))&&(x==y)||(x>=2&&x<=y));
}