#include<stdio.h>

main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
    for(x=1;n>=x;n--)
    {
      if(n%2==0)
	  {
	  	printf("%d",n);
		  }	
	}
}