#include<stdio.h>

//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
//
//Output:
//The sum of an Array: 18


int input ()
{
  int n;
  printf("enter the value of n:");
  scanf("%d",&n); 
  
  return n;
  
}
int array(int x[])
{
	
 
 int n=input();
  
  int i;
 
 int sum=0;
 int a[n];
  for(i=0;i<n;i++)
  {
  	printf("enter the value of array a[%d]:",i);
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  	sum=sum+a[i];
  }
  printf("%d",sum);
  
  return sum;
}
  
  
  
void main()
{
 int sum;
 array(sum);
 
 
}