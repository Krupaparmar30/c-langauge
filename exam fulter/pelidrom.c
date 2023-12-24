#include<stdio.h>

main()
{
  int i;
  char n;
  printf("enter the ssize of string:");
  scanf("%c",&n);
  
 
  
   char a[n];
   printf("enyer the value of string:");
   scanf("%s",&a);
   int cheak=0;
   int length=strlen(a);
   
   
   int j=length-1;
   for(i=0;i<length;i++)
   {
   	
   		if(a[i]!=a[j])
   		{
   			cheak=1;
		   }
		   j--;
	   
	  
   }
   if(cheak==1)
   {
   	printf("not pelidrom");
   }
   else
   {
   	printf(" pelidrom:");
   }
  
}