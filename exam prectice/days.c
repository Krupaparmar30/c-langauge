#include<stdio.h>

main()
{
    char day;
	printf("enter the value:");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'M':printf("monday");
		break;
		case 'T':printf("tuesday");
		break;
		case 'W':printf("wenesday");
		break;
		case 't':printf("thrshday");
		break;
		case 'F':printf("friday");
		break;
		case 'S':printf("saterday");
		break;
		case 's':printf("sonday");
		break;
		
		default:printf("enterr the valid char between(M to s)");
		
	}

}
