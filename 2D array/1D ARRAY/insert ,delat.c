//3. Write a C program to Insert, Delete, and update operations of the element into the array,




#include<stdio.h>

main()
{

  
   int a[5]={10,20,33,40,55};
  int i; 
   a[2]=a[3];
   a[3]=a[4];
   
   for(i=0;i<5-1;i++)
   {
   	printf("%d ",a[i]);
   }
   }