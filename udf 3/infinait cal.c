//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
//For example,
//Output:
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 1
//Enter the first number: 5
//Enter the second number: 3
//Addition of 5 and 3 is 8
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 4
//Enter the first number: 10
//Enter the second number: 5
//Division of 10 and 5 is 2
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 0

#include<stdio.h>

int input()
{
	int a;
	printf("Enter your choice:");
	scanf("%d",&a);
	return a;
}
int input1()
{
	int p;
	printf("Enter your first number:");
    scanf("%d",&p);
    
    return p;
    
}
int input2()
{
	
    int s;
    printf("Enter the second number:");
    scanf("%d",&s);
    return s;
}
void fun()
{
   do
   {
   x:
   printf("\nPress 1 for +\n");
   printf("Press 2 for -\n");
   printf("Press 3 for *\n");
   printf("Press 4 for /\n");
   printf("Press 5 for %\n");
   
    int a=input();
	
    int p=input1();
    int s=input2();

    
    switch(a)
    {
    	case 0:printf("cle is off:");
    	     
    	    break;
    	case 1:printf("addtioin if %d to %d:%d\n",p,s,p+s);
    	     goto x;
    	case 2:printf("subtrectioin if %d to %d :%d\n",p,s,p-s);
    	     goto x;
    	
     	case 3:printf("multiftioin  if %d to %d :%d\n",p,s,p*s);
    	          goto x;
        case 4:printf("divaidecioin if %d to %d :%d\n",p,s,p/s);
    	       goto x;
    	case 5 :printf("pr  if %d to %d :%d\n",p,s,p%s);
    	       
    	          goto x;
    	         
    	default :printf("enter vaild value:\n\n");
    
    	         
    }

}while(0);

     
}

 void main()
{
	
   fun();
    
}