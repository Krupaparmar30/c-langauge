#include<stdio.h>

main()
{
//7. WAP to Find max. from 5 using ternary operator.

	int a,b,c,d,e;
	printf("enter the values:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(b>c)?(b>d)?(b>e)?printf("b is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum");
	
	
}