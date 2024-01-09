
#include<stdio.h>
//q4. wap to change value by passing address of variable in udf.


void in(int *a)
{
	printf("change you enter value 1 increament!!\n\n");
	*a=*a+1;
}
main()
{
	int a;
	printf("enter   the value of a:");
	scanf("%d",&a);
	
	in(&a);
	printf("%d",a);
	
}