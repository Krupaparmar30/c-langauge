#include<stdio.h>
#include<string.h>

main()
{
  	
	
	char a[20];
	
     puts("enter the string : ");
	gets(a);
	
	
	int i,k=0;
	
	for(i=0; a[i]; i++)
	{
		a[i] = a[i+k];
		
		if(a[i] == ' ')
		{
			k++;
			i--;
		}
	}
	
	puts("string after removing blank spaces : ");
	
	puts(a);
}