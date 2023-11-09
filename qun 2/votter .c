#include<stdio.h>

main()
{
//	9. wap to make votter registration system. 
   
  int age;
  printf("enter your age:");
  scanf("%d",&age);
  
  if(age>18)
  {
     if(age>100)
     {
     		printf("not vaild age");
	 }
	 else
	 {
	 		printf("you eligeble for vot");
	 }
  }
  else
  {
  	printf("you not eligeble for vot");
  }
   
}