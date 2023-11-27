#include<stdio.h>

main()
{
//2. Write C program to print multiplication table of any number.	

    int x=1;
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    for(x=1;x<=n;x++)
    {
      printf("%d x %d=%d\n",n,x,n*x);	
	}
}


