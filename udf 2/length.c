///Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
//Input:
//Enter any string: development
//
//Output:
//Length is: 11

#include<stdio.h>
void p(length)
{
	printf("%d",length);
}
main()
{
	char a[20];
	printf("enter the string value :");
	scanf("%s",&a);
	
	int length=strlen(a);
	
  p(length);
}