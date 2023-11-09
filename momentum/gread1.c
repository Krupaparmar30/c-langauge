#include<stdio.h>

main()
{
	int math,sci,eng,hindi,drw;
	printf("enter the sub marks:");
	scanf("%d%d%d%d%d",&math,&sci,&eng,&hindi,&drw);
	
	int total=math+sci+eng+hindi+drw;
    printf("total is %d\n",total);
	
	 int per=total/5;
	 printf("per :%d\n",per);
	
	if(per>=90 && per<=100)
	{
	   printf("gread'A'");	
	}
	else if(per>=80 && per<90)
	{
	    printf("gread'B'");		
	}
	else if(per>=70 && per<80)
	{
	    printf("gread'C'");		
	}
	else if(per>=60&&per<70)
	
	{
		 printf("gread'D'");	
	}
	else if(per>=40&&per<=60)
	
	{
		 printf("gread'F'");	
	}
}