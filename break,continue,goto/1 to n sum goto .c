#include<stdio.h>

main()
{
//	3. WAP to find the n number factorial without a loop. (using a goto statement).
   
   int x=1;
   int n;
   int sum=0;
   printf("enter the value of n:");
   scanf("%d",&n);
    x:
   	sum=sum+x;
   	
   	x++;
 
   	if(x<=n)
   	{
   	       
		 goto x;	
	   }
	   printf("%d",sum);

}