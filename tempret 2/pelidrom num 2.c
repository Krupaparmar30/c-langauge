#include<stdio.h>

main()
{
	// 7. wap to check number is palindrom or not.
	
	
	
  int n;
  int revers=0;
  int remainder;
  int ans;
  
  printf("enter the value of n:");
  scanf("%d",&n);
  ans=n;
  
  while(n!=0)
  {
  	 remainder=n%10;
  	 revers=revers*10+ remainder;
  	 n/=10;
  	 
  }
  if(ans==revers)
  {
   printf("%d pelidrom ",ans);	
  }
  else
  {
  	printf("%d  not pelidrom ",ans);	
  }
	
}