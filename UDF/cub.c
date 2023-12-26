#include<stdio.h>
//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125
int input()
{
    int a;
	printf("enter the value of a:");
	scanf("%d",&a);	
	return a;
}

void cub()
{
 
 int cub;
 int a=input();
 cub=a*a*a;	
 printf("%d",cub);
	

   
}
main()
{
	cub();
	
}