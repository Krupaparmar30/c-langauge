#include<stdio.h>

main()
{
	int call,lan,addmision;
	
	printf("vidhiya vihar sankul");
	printf("want call resive");
	scanf("%d",&call);
	
	switch(call)
	{
		case 0:printf("call ended");
		break;
		case 1:printf("1. guj\n");
		   printf("2. hindi\n");
		   printf("3. eng\n");
		   
		   printf("enter the lan\n");
		   scanf("%d",&lan);
		   
		   
	switch(lan)
	{
		case 1:printf("your lan is guj\n");
		       printf("hu v.v.s mathi vat karu chu\n");
		       printf("tamare addmision levanu che\n");
		       scanf("%d",&addmision);
		       break;
		       
	  case 2:printf("your lan is hindi\n");
		       printf("me  v.v.s mese bat kar rahi hu \n");
		       printf("aapko  addmision lena he\n");
		       scanf("%d",&addmision);
		       break;
		       
	 case 3:	       printf("your lan is eng\n");
		       printf("i toke  to v.v.s \n");
		       printf("if you addmision want \n");
		       scanf("%d",&addmision);
		       
		       break;
		       
		       
		   }
		 
		    switch(addmision)
			{
				case 1:printf("tamare addmision levanu che to aa num par call karo");
				     printf("no.5465987123");
				     break;
				   }	   
		   
	}
}
