
#include<stdio.h>
#include<string.h>

//Q.1 Write a Program to find the length of a string using a Pointer.
//For example,
//Input:
//Enter any string: hello world
//
//Output:
//The length of a string is: 11
main()
{
	char name[32];
	printf("enter your name:");
	gets(name);

  int ln=strlen(name);
	int *ptr =&ln;
	 
	printf("%d",*ptr);
}