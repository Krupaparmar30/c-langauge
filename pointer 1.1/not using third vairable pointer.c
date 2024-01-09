#include<stdio.h>

main()
{
int a;
printf("enter the value of a:");
scanf("%d",&a);

int b;
printf("enter the value of b:");
scanf("%d",&b);

//a=a+b;
//b=a-b;
//a=a-b;
int *ptr=&a;
int **ptr1=&ptr;


int *ptr2=&b;
int **ptr3=&ptr2;

**ptr1=**ptr1+**ptr3;
**ptr3=**ptr1-**ptr3;
**ptr1=**ptr1-**ptr3;


printf("%d\n",**ptr1);
printf("%d",**ptr3);
}