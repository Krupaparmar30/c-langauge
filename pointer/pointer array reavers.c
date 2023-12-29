#include<stdio.h>

void main()
{
//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
//For example,
//Input:
//Enter the array's size: 5
//
//
//Enter array elements:
//a[0] = 5
//a[1] = 9
//a[2] = 4
//a[3] = 7
//a[4] = 3
//
//Output:
//Reversed array elements:
//3, 7, 4, 9, 5	

  int i,n;
  printf("enter the value of n:");
  scanf("%d",&n);
int a[n];
int *ptr=&a[n];

for(i=0;i<n;i++)
{
	printf("enter the value of a[%d]:",i);
	scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
	printf("memroy value %d\n",ptr);
	ptr-=1;
}
for(i=n-1;i>=0;i--)
{
	printf("a[%d]=a[%d]\n",i,a[i]);
}
}