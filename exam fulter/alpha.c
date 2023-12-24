#include<stdio.h>

main()
{
int i,j;
  char a[20];
  printf("enter the ssize of string:");
  scanf("%s",&a);
  
 
  
   int digit=0;
   int alp=0;
   int sach=0;
   
   for(i=0;i<a[i];i++)
   {
   	if(a[i]>='1'&&a[i]<='9')
   	{
   		digit++;
	   }
	   else if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
	   {
	   	alp++;
	   }
	   else
	   {
	   	sach++;
	   }
   }
   printf("digit:%d\n",digit);
      printf("alp:%d\n",alp);
         printf("sach:%d\n",sach);
   
}