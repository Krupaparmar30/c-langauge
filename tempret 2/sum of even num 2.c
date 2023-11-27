#include<stdio.h>

main()
{
  // 2. wap to find sum of even number between 1 to 28.
  
  int x=1;
  int y=28;
  
  int sum=0;
  
  for(x=1;x<=y;x++)
  {
  	if(x%2==0)
  	{
  		printf("%d ",x);
  		sum=sum+x;
	  }
	  
  }
  printf("\n\n sum is %d ",sum);	
	
}