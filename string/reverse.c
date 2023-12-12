//4. WAP to given string in reverse.

#include<stdio.h>

main()
{
	 int n, i;
     printf("enter your string array size: ");
     scanf("%d",&n);
  
     char a[n];
   
     	printf("enter your string  :");
     	scanf("%s",&a);
     
     printf("string is revers");
     	for(i=n;i>=0;i--)
     	{
     		printf("%c ",a[i]);
		 }
		 
		 
	}