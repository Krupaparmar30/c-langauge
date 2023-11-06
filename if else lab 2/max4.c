#include<stdio.h>

main()
{
//    3. WAP to Find max. from given 4 no. using nested if else . 
    

     int a,b,c,d;
     printf("enter the values:");
     scanf("%d%d%d%d",&a,&b,&c,&d);
//     a,b,c,d
     if(a>b)
     {
//     	a,c,d
       if(a>c)
	   {
//	   	  a,d
	   	 if(a>d)
	   	 {
	   	 	printf("a is maximum");
			}
			else
			{
			 printf("d is maximum");	
			}
	   	 
	   }
//	   c,d
	   else
	   {
	   	 if(c>d)
	   	 {
	   	   printf("c is maximum");	
			}
			else
			{
			  printf("d is maximum");	
			}
	   }	
	 }
	 else
//	 b,c,d
	 {
	 	if(b>c)
	 	{
//	 	   b,d	
        if(b>d)
        {
        	printf("b is maximum");
		}
		else
		{
		    printf("d is maximum");	
		}

		 }
	    else
		 {
//		   c,d	
           if(c>d)
           {
           	printf("c is maximum");
		   }
		   else
		   {
		   	printf("d is maximum");
		   }
		 }
	 }
     
     
 
     
}