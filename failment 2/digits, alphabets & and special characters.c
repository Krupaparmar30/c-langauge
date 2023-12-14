#include<stdio.h>

#include<string.h>
main()
{
//	3. Count No. of digits, alphabets & and special characters.

  char a[20];
  printf("enter the string:");
  scanf("%s",&a);
  
  int digits=0;
  int alpha=0;
  int spech=0;
  
  int i;
  for(i=0;a[i];i++)

  {
  	
	if(a[i]>='1'&&a[i]<='9')
	{
	  digits++;	
	}
	else if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
	
	{
	 alpha++;
	}
	else 
	
	{
	spech++;
	}
	
  }
  printf("this is digits %d\n",digits);
  printf("this is alpha %d\n", alpha);
  printf("this is spech %d\n",spech);
   
}