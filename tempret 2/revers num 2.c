#include<stdio.h>

main()
{
//	 4. wap to reverse number of given number.


  int n;
  int revers=0;
  int remainder;
  
  printf("enter the value of n:");
  scanf("%d",&n);
  
  while(n!=0)
  {
  	 remainder=n%10;
  	 revers=revers*10+ remainder;
  	 n/=10;
  	 
  }
  printf("%d",	 revers);
}