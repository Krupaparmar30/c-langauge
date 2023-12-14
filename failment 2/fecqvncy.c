#include<stdio.h>
#include<string.h>

main()
{
	char name[20];
	printf("enter the string:");
	scanf("%s",&name);
	
	int length=strlen(name);
	int i,j;
	int f=1;
	
	for(i=0;i<length;i++)
	{
	
	  for(j=i+1;j<length;j++)
	  {
	  	if(name[i]==name[j])
	  	{
	  	 f++;
		  name[j]=0;
		  	
		  }
	  }
	  if(name[i]!=0)
	  {
	  	printf("%c->%d\n",name[i],f);
	  }
	  	f=1;
	}
}