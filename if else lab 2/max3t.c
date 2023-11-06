#include<stdio.h>


main()
{
//	5. WAP to Find max. from 3 using ternary operator.

    int a,b,c;
    printf("enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    
    (a>b)?(a>c)?printf("a is maximum"):printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
	  
	
}