#include<stdio.h>

main()
{
//	4. WAP to print the multiplication table of each element of the array.


//  int n;
//  printf("enter the size of array:");
//  scanf("%d",&n);
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int i,j;
//  for(i=1;i<=n;i++)
//  {
//  	for(j=1;j<=n;j++)
//  	{
//  		printf("enter the values:");
//        scanf("%d%d",&a[i],&a[j]);
//	  }
//  }
  for(i=0;i<=9;i++)
  {
  	for(j=1;j<=10;j++)
  	{
  	   printf("%d x %d =%d\n",a[i],j,a[i]*j);	
	  }
	  printf("\n");
  }
}