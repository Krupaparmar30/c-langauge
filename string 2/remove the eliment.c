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
	
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
			}
		}
		if(a[i]!=-1)
		{
			printf("%c",a[i]);
		}
	}
}