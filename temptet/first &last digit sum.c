#include<stdio.h>

main()
{
//4. Write C program to find sum of first and last digit of a number.

     int n;
     printf("enter the value of n:");
     scanf("%d",&n);
     
     int count=0;
     int last=n%10;
     while(n>9)
     {
     	n/=10;
     	count++;
     	
	 }
	 printf("%d",n+last);
}