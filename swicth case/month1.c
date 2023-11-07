#include<stdio.h>

main()
{
//	2. WaP to print month names using switch case.
	
	int month;
	printf("enter the value of month: ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:printf("January-31 days");
		break;
		case 2:printf("February-28 days");
		break;
		case 3:printf("March-31 days");
		break;
		case 4:printf("April-30 days");
		break;
		case 5:printf("May-31 days");
		break;
		case 6:printf("June-30 days");
		break;
		case 7:printf("July-31 days");
		break;
		case 8:printf("Augsut-31 days");
		break;
		case 9:printf("Saptember-30 days");
		break;
		case 10:printf("October-31 days");
		break;
		case 11:printf("November-30 days");
		break;
		case 12:printf("December-31 days");
		break;
		default :printf("enter the valid input(between 1 to 12)");
		
	}
}