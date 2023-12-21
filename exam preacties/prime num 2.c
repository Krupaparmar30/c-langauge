#include<stdio.h>

main()
{
	int i=1;
//	int n;
//	printf("enter the value of n:");
//	scanf("%d",&n);
//	 
  int x=50;
 int sum=0;
 y:
 if(i<=x)
 {
 	if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0&&i==3&&i==5&&i==2&&i==7)
 {
 	printf("%d",i);
 	sum=sum+i;
 }
   goto y;
 }
 
 printf("%d",sum);

}