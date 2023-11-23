#include<stdio.h>

main()

{
//	1. WAP to demonstrate the use of break keywords.
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	
	for(x=1;x<=n;x++)
	{
	  if(x==n)
	  {
	  	 
	  	break;
	  
	  }
	   printf("%d ",x); 
	}
	
}