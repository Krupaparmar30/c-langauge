#include<stdio.h>

main()
{
    
    int unit;
    printf("enter your bill:");
    scanf("%d",&unit);
    int total;
    if( unit>=0 && unit<=50) 
    {
    	total=unit*0.5;
    	total=total+(total*0.2);
    	printf("total bill is:%d",total);
	}
	else if(unit>50 && unit<=100)
	{
		total=unit*0.75;
		total=total+(total*0.2);
		printf("total bill is:%d",total);
	}
	else if(unit>100 && unit<=150)
	{
		total=unit*1.25;
		total=total+(total*0.2);
		printf("total bill is:%d",total);
	}
	else if(unit>150 && unit<=250)
	{
		total=unit*1.50;
		total=total+(total*0.2);
		printf("total bill is:%d",total);
	
	}

	
		
	
}