#include<stdio.h>
#include<conio.h>
#include<string.h>

void pass()
{
	char pass[32];
	s:
		printf("enter the password:");
		gets(pass);
		
		int i,ck=0;
		int l=strlen(pass);
		if(l>=8&&l<=32)
		{
		  	if(pass[0]>='A'&&pass[0]<='Z')
		     {
			     ck=1;
		     }
			 else
			 {
			 	printf("password not exit frist togal case!!");
			 	goto s;
			 }
			 if(ck==1)
			 {
			 	ck=0;
			 	
			 	for(i=0;i<l;i++)
			 	{
			 		if(pass[i]>='a'&&pass[i]<='z')
			 		{
			 			ck=1;
					 }
				 }
				 if(ck==1)
				 {
				 	ck=0;
				 	for(i=0;i<l;i++)
				 	{
				 		if(pass[i]>=48&&pass[i]<=57)
				 		{
				 			ck=1;
						 }
					 }
					 if(ck==1)
					 {
					 	ck=0;
					 	for(i=0;i<l;i++)
					 	{
					 		if(pass[i]==' ')
					 		{
					 			ck=1;
							 }
						 }
						 
						 if(ck==0)
						 {
						 	ck=0;
						 	for(i=0;i<l;i++)
						 	{
						 		if(pass[i]>=33 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64 || pass[i]>=91 && pass[i]<=96 || pass[i]>=123 && pass[i]<=126)
						 	   {
						 		ck=1;
							    }
							 }
							 
							 
							 if(ck==1)
							 {
							 	printf("enter the your password parfact");
							 }
							 else
							 {
							 	printf("password is not parfect spacial char!!");
							 	goto s;
							 }
						 }
						 else
				      	{
						printf("Password is Not parfact Space is not allow!!");
						goto s;
				     	}
						 
					 }
				 }
				 else
				{
					printf("Password is Not parfact One Number Are Compulsory!!");
					goto s;
				}
			 
	     	}
	      else
			{
				printf("Password is Not parfact small character!!");
				goto s;
			}
		}
		else
	{
		printf("Password is Not parfact Please Enter Minimum 8 And Maximum 32 Only Enter!!");
		goto s;
	}	
	
	
	
	
}


void main()
{
	pass();
}