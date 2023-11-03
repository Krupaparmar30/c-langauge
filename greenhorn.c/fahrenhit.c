#include<stdio.h>

main()
{
	float celsius;
	float fahrenhit;
	printf("enter the value of celsius:");
	scanf("%f",&celsius);
//	printf("enter the value of  fahrenhit:");
//	scanf("%d",& fahrenhit);
	
	 fahrenhit=(9.5*celsius)+32;
	 printf("%.2f",fahrenhit);
	
}