#include<stdio.h>

main()
{
// 1.	find maximum from 3 number using nested .

    int a,b,c;
    printf("enter the values :");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
    {
      if(a>c)
	  {
	  	printf("a is maximum");
	  } 
		   else
		   {
		   	printf("c is maximum");
		   }	
	}
	else
	{
	  if(b>c)
	  {
	  	printf("b is maximum");
		  }	
		  else
		  {
		  	printf("c is maximum");
		  }
	}
    
    
    
    
    
    
    
    
    
    
    
}