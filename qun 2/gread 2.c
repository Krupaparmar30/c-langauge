#include<stdio.h>


main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	
	
    if(mark>=90 && mark<=100)
	{
	   printf("gread'A'");	
	}
	else if(mark>=80 && mark<90)
	{
	    printf("gread'B'");		
	}
	else if(mark>=70 && mark<80)
	{
	    printf("gread'C'");		
	}
	else if(mark>=60&&mark<70)
	
	{
		 printf("gread'D'");	
	}
	else if(mark>=40&&mark<=60)
	
	{
		 printf("gread'F'");	
	}
}