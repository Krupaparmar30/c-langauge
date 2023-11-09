#include<stdio.h>

main()

{
	int day;
	printf("enter the num between 1and 7:");
	scanf("%d",&day);
	
	if(day==1)
	
	{
		printf("MONDAY");
	}
	else if(day==2)
	{
		printf("TUESDAY");
	}
	else if(day==3)
	{
		printf("WEDNESDAY");
	}
	else if(day==4)
	{
		printf("THURSDAY");
	}
	else if(day==5)
	{
		printf("FRIDAY");
	}
	else if(day==6)
	{
		printf("SATERDAY");
	}
	else if(day==7)
	{
		printf("SUNDAY");
	}
	else
	
	{
		printf("enter the num between 1and 7");
	}
	
}