#include<stdio.h>
#include<string.h>

main()
{
  	int n;
	
	printf("enter the size : ");
	scanf("%d",&n);
	
	char a[n];
	
	printf("enter the string : ");
	scanf("%s",&a);
	
	
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