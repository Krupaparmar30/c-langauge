#include<stdio.h>
//1. WAP to convert given string in upwercase.
main()
{
     char  n;
     printf("enter your string array size: ");
     scanf("%c",&n);
     int i;
     char a[n];
   
     	printf("enter the  string in  lower case :");
     	scanf("%s",&a);
     	
    
     	int length=sizeof(a);
     	for( int i=0;i<length;i++)
     	{
     		if(a[i]>='a'&&a[i]<='z')
     		{
     			a[i]=a[i]-32;
			 }
		 }
       printf("upwer case is %s",a);
     
}