#include<stdio.h>
#include<string.h>
main()
{
	char gmail[11]="@gmail.com";
	char add[100];
	p:
	printf("\nenter the your gmail:");
	gets(add);
	
	int i,len,ck=0,l=strlen(add);
	if(l>=13&&l<=32)
	{
		len=l-10;
		int gk=0;
		ck=1;
		for(i=len;i<l;i++)
		{
			if(gmail[gk]==add[i])
			{
				ck++;
			}
			gk++;
		}
		if(ck==11)
		{
			ck=0;
			for(i=0;i<l-10;i++)
			{
			   if(add[i]>=32 && add[i]<=47 || add[i]>=58 && add[i]<=64 || add[i]>=91 && add[i]<=96 || add[i]>=123 && add[i]<=126)
			   {
				ck=1;
			   }
			}
			if(ck==0)
		    {
			ck=0;
			for(i=0;i<=l-10;i++)
			{
				if(add[i]>='A'&&add[i]<='Z')
				{
					ck=1;
				}
			}
			if(ck==0)
			{
				printf("gmail is vaild succ!!");
			}
			else
			{
				printf("your gmail enter only small alph!!");
				goto p;
			}
		    }
		    else
		    {
		    		printf("your gmail enter do not spacial ch!!");
		    		goto p;
			}
		}
		
		else
		{
				printf("your gmail do not @gmail.com!!");
				goto p;
		}
		
	}
else
{
  	printf("Please Enter Character!!");	
	  goto p;	
}
	
}