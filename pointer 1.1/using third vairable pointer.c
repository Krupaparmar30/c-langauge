#include<stdio.h>

main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	int b;
	printf("enter the value of b:");
	scanf("%d",&b);
  int c;
   
   int *ptr=&a;
   int *ptr1=&b;
   int *ptr2=&c;
   
   
   
   *ptr2=*ptr;
   *ptr=*ptr1;
   *ptr1=*ptr2;
   
   
   printf("%d\n",*ptr);
   	  printf("%d",*ptr1);
   	
}