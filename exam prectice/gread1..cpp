#include<stdio.h>

main()
{
	int ph,che,bio,hin;
	printf("enter the sub marks");
	scanf("%d%d%d%d",&ph,&che,&bio,&hin);
	
	int total=ph+che+bio+hin;
	printf("%d\n",&total);
	
	int pre=total/4;
	printf("%d\n",pre);
	
	if(pre>=90&&pre<=100)
	{
		printf("gread is A");
	}
   else if(pre>=80&&pre<90)
	{
		printf("gread is B");
	}
	
	
}
