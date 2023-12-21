#include<stdio.h>

main()
{
	  int i=1;
	  int n;
	  printf("enter the value of n:");
	  scanf("%d",&n);
	  
	  for(i=1;i<=100;i++)
	  {
	  	if(i==n)
	  	{
	  		break;
		  }
		  printf("%d ",i);
		  }    
}