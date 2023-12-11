//8. Wap to find the reverse array without using another array.
#include<stdio.h>

main()
{


int n;
   printf("enter the size of array:",n);
scanf("%d",&n);
int i,j;
int a[n];
for(i=0;i<n;i++)
{
	printf("enter the array:");
	scanf("%d",&a[i]);
}

for(i=n-1;i>=0;i--)
{
  printf("%d",a[i]);
}

}