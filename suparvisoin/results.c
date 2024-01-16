
//
//Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
//For example,
//Input:
//Enter details of Student 1:
//Roll no => 121
//Name => Raj Patel
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//
//Enter details of Student 2:
//Roll no => 122
//Name => Divya Sharma
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//
//Enter details of Student 3:
//Roll no => 123
//Name => Piyush Mishra
//Chemistry => 72
//Mathematics => 87
//Physics => 93
//
//Enter details of Student 4:
//Roll no => 124
//Name => Vatsal Mangukiya
//Chemistry => 68
//Mathematics => 96
//Physics => 85
//
//Enter details of Student 5:
//Roll no => 125
//Name => Sagar Trivedi
//Chemistry => 91
//Mathematics => 89
//Physics => 77
//
//Output:
//Raj Patel (121)
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//Total => 273/300
//Percent => 91.00%
//
//Divya Sharma (122)
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//Total => 256/300
//Percent => 85.33%
//
//Piyush Mishra (123)
//Chemistry => 72
//Mathematics => 87
//Physics => 93
//Total => 252/300
//Percent => 84.00%
//
//Vatsal Mangukiya (124)
//Chemistry => 68
//Mathematics => 96
//Physics => 85
//Total => 249/300
//Percent => 83.00%
//
//Sagar Trivedi (125)
//Chemistry => 91
//Mathematics => 89
//Physics => 77
//Total => 257/300
//Percent => 85.66%

#include<stdio.h>
#include<string.h>
struct stundant
{
	int rollnum;
	char name[50];
	int Chemistry ;
	int Mathematics;
	int Physics;

	
	
}
main()
{
	char name[50];
	struct stundant s[5];
	int i;
	int Chemistry ;
	int Mathematics;
	int Physics;
	int total;
	float Percent;
    
	   
	
	for(i=0;i<=5;i++)
	{
		printf("enter stundant name:");
     	scanf(" %[^\n]s",name);
	    strcpy(s[i].name,name);
	    
	    printf("enter stundant rollnum:");
     	scanf("%d",&s[i].rollnum);
     	
     	printf("enter stundant Chemistry marks:");
     	scanf("%d",&s[i].Chemistry);
     	
     	printf("enter stundant Mathematics marks:");
     	scanf("%d",&s[i].Mathematics);
     	
     	printf("enter stundant Physics marks:");
     	scanf("%d",&s[i].Physics);
     	
     	printf("\n");
	}
	
	for(i=0;i<=5;i++)
	{
		printf("%s\n",s[i].name);
		printf("%d\n",s[i].rollnum);
		printf("%d\n",s[i].Chemistry );
		printf("%d\n",s[i].Mathematics);
		printf("%d\n",s[i].Physics);
					
      int total=s[i].Chemistry + s[i].Mathematics + s[i].Physics;
      printf(" Total: %d/300\n",total);
      
       	float Percent=(total*100.0)/300;
       printf("percentage %.2f%%",Percent);

      
	 
   
		
					
	}
	

}