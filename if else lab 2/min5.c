#include<stdio.h>

main()
{
//	4. WAP to Find min. from given 5 no. using nested
//if else.

	int a,b,c,d,e;
	printf("enter the values:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	if(a<b)
	{
	   if(a<c)
	   {
	   	 if(a<d)
	   	 {
	   	 	  if(a<e)
	   	 	    {
	   	 		printf("a is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
			     if(d<e)
			     {
			  	   printf("d is minimum");
				 }
				  else
				  {
				  	printf("e is minimum");
				  }	
			}
		   }
		   else
		   {
		   	if(c<d)
		   	{
		   		if(c<e)
		   		{
		   		  printf("c is minimum");	
				   }
				   else
				   {
				   	 printf("e is minimum");
				   }
			   }
			   else
			   {
			   	if(d<e)
			     {
			  	   printf("d is minimum");
				 }
				  else
				  {
				  	printf("e is minimum");
				  }	
			   }
			   }	
	}
	else
	{
	  if(b<c)	
	  {
	  	if(b<d)
	  	{
	  		if(b<e)
	  		{
	  		   printf("b is minimum");
			  }
			  else
			  {
			  	 printf("e is minimum");
			  }
		  }
		  else
		  {
		  	if(d<e)
			     {
			  	   printf("d is minimum");
				 }
				  else
				  {
				  	printf("e is minimum");
				  }
		  }
	  }
	  else
	  {
	  	if(c<d)
	  	{
	  		if(c<e)
	  		{
	  		  printf("c is minimum");
			  }
			  else
			  
			  {
			  	printf("e is minimum");
			  }
		  }
		  else
		  {
		   if(d<e)
		   {
		   	printf("d is minimum");
			   }
			   else
			   {
			   	printf("e is minimum");
				   }	
		  }
	  }
	}
	
}