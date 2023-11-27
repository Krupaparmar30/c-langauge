#include<stdio.h>

main()
{
	// 2. wap to find sum of even number between 1



	int x=1;
	int y=28;
	int sum=0;
	
	for(x=1;x<=28;x++)
	{
       if(x%2==0)
       {
       		sum=sum+x;
	   }
	}
	printf("%d",sum);
}

