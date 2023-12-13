#include<stdio.h>
#include<string.h>
main()
{
   
     char  n;
     printf("enter your string array size: ");
     scanf("%c",&n);
     int i,	j=n,check=0;
     char name[n];
   
     	printf("enter your string as name :");
     	scanf("%s",&name);
     	
     for(i=0;i<n;i++)
	 
	 
	 {
	 
	 	if(name[i]!=name[j])
	 	{
	 		check=1;
	 	
		 }
		 j--;
		
		 }
		 
		 
		 
		 if(check==1)
		 {
		   printf("string of not pelimdrom");
		 }
			 else
			 {
			 	printf("string of pelimdrom");
			 }	
     	
     	
}