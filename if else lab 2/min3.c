#include<stdio.h>

main()
{
//    2. WAP to Find min. from given 3 no. using nested if else.        

     int a,b,c;
     printf("enter the values:");
     scanf("%d%d%d",&a,&b,&c);
     
     
     
//     a,b,c
     if(a<b)
     {
//     	a,c
     	if(a<c)
     	{
     	    printf("a is minimum");	
		 }
		 else
		 {
		 	printf("c is minimum");
		 }
	 }
	 else
	 {
//	    b,c	
       if(b<c)
       {
       	 printf("b is minimum");
	   }
	   else
	   {
	   	printf("c is minimum");
	   }
	 }
     
     
}