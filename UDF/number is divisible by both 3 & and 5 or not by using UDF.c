#include<stdio.h>

//Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.For example,
//Input:
//Enter any number: 15
//
//Output:
//The given number is divisible by both 3 & 5.

//For example,
//Input:
//Enter any number: 10
//
//Output:
//The given number is not divisible by both 3 & 5.

int  input()
{
	int a;
   printf("enter the value of a:");
   scanf("%d",&a);
   return a;
   
}
void proess()
{
	
	int a=input();
	
	
	
	if(a%3==0&&a%5==0)
   {
   	printf("number is divisible by both 3 & and 5");
   }
   else if(a%3==0)
   {
   	printf("number is divisible by  3 ");
   }
   else if(a%5==0)
   {
   	printf("number is divisible by  5");
   }
   else
   {
   	printf("number is divisible not by  3 & and 5");
   }
   
   

}

main()
{
   proess();
  
}