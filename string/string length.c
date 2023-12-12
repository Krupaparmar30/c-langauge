
//3. WAP to given string length.

#include<stdio.h>

main()
{
	 char  n;
     printf("enter your string array size: ");
     scanf("%c",&n);
  
     char a[n];
   
     	printf("enter your string  :");
     	scanf("%s",&a);
     	
    int i,length;
    
    for(i=0;a[i]!=0;i++)
    {
    	length++;
    	
	}
	printf("length is %d  ",length);
}