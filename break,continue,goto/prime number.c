#include<stdio.h>


main()
{
// 5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.	
  
  int x=2;
  int y=50;
  int sum=17;
  printf("2 3 5 7 ");
  x:
  if(x<=y)
  {
  	x++;
  	if(x%2!=0 && x%3!=0 && x%7!=0   )
    {
  	   printf("%d",x);
  	   sum+=x;
  	   
    }
    goto x;

  }

printf("\n ans %d ",sum);
}