#include<stdio.h>

main()
{
	int basesalary;
	int hra;
	int da;
	int ta;
	int grosssalary;
	printf("enter the basesalary:");
	scanf("%d",&basesalary);
	
	hra=10;
	da=5;
	ta=8;
	
	grosssalary=basesalary+hra+da+ta;
	printf("grosssalary is %d",grosssalary);
	
	
}