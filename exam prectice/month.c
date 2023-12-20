#include<stdio.h>

main()
{
	int month;
	printf("enter the value of a");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:printf("january 31 days");
		break;
		case 2:printf("freb 28 days");
		break;
		
		default:printf("enter the value between(1 to 2)");
	}
}
