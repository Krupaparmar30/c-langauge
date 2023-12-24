#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	printf("enter the value of string:");
	scanf("%s",&a);
	char b[20];
	
		printf("enter the value of string:");
	scanf("%s",&b);
	int ans;
	
	ans=strcmp(a,b);
	
	if(ans==0)
	{
		printf("this is same");
	}
	else
	{
			printf("this not is same");
	}
	
}