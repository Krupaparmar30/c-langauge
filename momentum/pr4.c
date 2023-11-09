#include<stdio.h>

main()
{
	char x;
	printf("enter the day:");
	scanf("%c",&x);
	
	switch(x)
	{
		case 'M':printf("MONDAY");
		break;
		case 'T':printf("TUESDAY");
		break;
		case 'W':printf("WEDNESDAY");
		break;
		case 't':printf("THRESDAY");
		break;
		case 'F':printf("FRIDAY");
		break;
		case 'S':printf("SATERDAY");
		break;
		case 's':printf("SUNDAY");
		break;
		default :printf("enter the valid day ");
		
	}
	
}