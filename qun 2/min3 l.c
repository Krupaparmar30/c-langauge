#include<stdio.h>

main()
{
//	4.find minimum from 3 number using ladder .

    int a,b,c;
    printf("enter the values :");
    scanf("%d%d%d",&a,&b,&c);
    
   if(a<b&&a<c)
   {
   	 printf("a is minimum");
   }
   else if(b<a&&b<c)
   {
   	printf("b is minimum");
   }
   else 
   
   {
   	printf("c is minimum");
   }
   
    
    
}