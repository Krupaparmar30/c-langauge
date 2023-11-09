#include<stdio.h>

main()
{
//3.	find minimum from 3 number using nested .

    int a,b,c;
    printf("enter the values :");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b)
    {
      if(a<c)
	  {
	  	printf("a is minimum");
	  } 
		   else
		   {
		   	printf("c is  minimum");
		   }	
	}
	else
	{
	  if(b<c)
	  {
	  	printf("b is  minimum");
		  }	
		  else
		  {
		  	printf("c is  minimum");
		  }
	}
    
    
    
    
    
    
    
    
    
    
    
}