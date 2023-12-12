//1. WAP to convert given string in lowercase.


#include<stdio.h>

main()
{
     char  n;
     printf("enter your string array size: ");
     scanf("%c",&n);
     int i;
     char a[n];
   
     	printf("enter the value of string:");
     	scanf("%s",&a);
     	
    
     	int length=sizeof(a);
     	
     	for(  i=0;i<length;i++)
     	{
     		if(a[i]>='A'&&a[i]<='Z')
     		{
     			a[i]=a[i]+32;
			 }
		 }
       printf("lower case %s",a);
     
}