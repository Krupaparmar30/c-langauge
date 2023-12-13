#include<stdio.h>

main()
{
	 
	 
	 char a[20];
	 puts("enter the string:");
	 gets(a);
	 
	 
	 int i,j;
	 int count=0;
	 
	 for(i=0;i<a[i];i++)
	 
	 {
	 	count=1;
	 	for(j=i+1;j<a[i];j++)
	 	
	 	{
	 		if(a[i]==a[j])
	 		
	 		{
	 		   count++;
				a[j]= -1;	
			 }
	 		
	 		}
		 puts(a[i]);
		  puts(count);
		 
	 }
}

