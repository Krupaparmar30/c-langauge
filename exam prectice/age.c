#include<stdio.h>
main()
{
	int age;
	printf("enter the value of age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
	  if(age>=100)
	  {
	  	printf("your age is very old");
	  }
	  else
	  {
	  	printf("your age is valid");	
	  }
	}
	else
	
	{
		if(age==0)
		{
			printf("your age is nutral");
		}
		else
		{
			printf("your age is not vaild");
		}
	}
}
