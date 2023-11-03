#include<stdio.h>

main()
{
	int age;
	
	printf("enter the value of age:");
	scanf("%d",&age);

	
	
	if(age>18)
	{
	 if(age>100)
	 {
	 	 printf("you enter age is very old ");
		}
		else
		{
		 printf("you enter valid age");	
			}	
			
	}
	else
	{
     if(age==0)
     {
      printf("you enter is neutral age");	
	 }
	 else
	 {
	 	printf("you enter not valid age");
	 }
	 
	}
}