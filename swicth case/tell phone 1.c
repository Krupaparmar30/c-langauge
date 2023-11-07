#include<stdio.h>

main()
{
	
	
	
//	A. WaP to create/simulate telecom call service conversation scenario using nested switch case.
    
    
    int call,language,addmisioin;
    
    printf(" vidhiya vihar sankul\n");
    printf("want you call recive:");
    scanf("%d",&call);
    switch(call)
    {
      case 0:printf("call ended");
	  break;
	  case 1:printf("1.gujrati\n");
	         printf("2.hindi\n");
	         printf("3.english\n");
	         printf("enter the your language:");
	         scanf("%d",& language);
	         
	 
	   switch( language)
	
	   {
		case 1:printf("your language is gujrati\n");
		       printf("hu vidhiya vihar sankul mathi bolu chu\n");
		       printf("tamre addmisioin levanu che\n\n");
		       scanf("%d",&addmisioin);
		       break;
		       
		case 2:printf("your language is hindi\n");
		       printf("me vidhiya vihar sankul me se bat kar rahi hu\n");
		       printf("aapko addmisioin lena hai\n");
		       scanf("%d",&addmisioin);
		       break;
		       
		case 3:printf("your language is english\n");
		       printf("i tak in vidhiya vihar sankul \n");
		       printf("if want addmisioin in our school\n\n");
		       scanf("%d",&addmisioin);
		     
	    printf("enter in 1 to 3");
		
		
 
	}
	switch(addmisioin)
	{  
	     int choies;
	
		
		  printf("enter your choies:");
		  scanf("%d",&choies);	
			
	
	   case 1:printf("tamare addmisioin levanu hoy to aa number par call kari sako cho..\n");	
	          printf("9865847590\n");
	          printf("9865632417\n");
	          break;
	   
	   case 2:printf("aapko addmisioin lena ho to iss number par call kar sakte hai\n");	
	          printf("9865847590\n");
          printf("9865632417\n");
	          break;
	          
	  case 3:printf("if you want addmisioin please call thos number\n");	
	         printf("9865847590\n");
	          printf("9865632417\n");
	          break;
	          
		
}

}

}
