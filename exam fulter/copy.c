#include<stdio.h>
#include<string.h>

main()
{

	char a[20];
	char b[20];
	
	int ans=strcpy(a,b);
	printf("enter the value of string:");
	scanf("%s",&a);
	
	
	printf("enter the value of string:");
	scanf("%s",&b);
	
	printf("%s\n",a);
		printf("%s",b);
	
}