#include<stdio.h>

main()
{
	int x,y,z;
	int sum;
	printf("enter the value of x:");
	scanf("%d",&x);
	
	printf("enter the value of y:");
	scanf("%d",&y);
	
	printf("enter the value of z:");
	scanf("%d",&z);
	
    sum=(x*x*x)-(y*y*y)-(z*z*z)-((3*(x+y)*(y+z)*(z+x)));
	printf("ans is %d",sum);
}