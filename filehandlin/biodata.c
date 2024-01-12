#include<stdio.h>
//Q1. WAP to print your basic information in HTML using file handling using Dev C++.
main()
{
	FILE *fp;  
	
	fp=fopen("data.html","w");
	
	char name[50];
	printf("enter your name:");
	gets(name);
	
	printf("%s",name);
	
	fprintf(fp,"%s\n","<html>");
	fprintf(fp,"%s\n","<head>");
    
	fprintf(fp,"%s\n","<title>");
    fprintf(fp,"%s\n","bio data");
    fprintf(fp,"%s\n","</title>");
	
	fprintf(fp,"%s\n","<body>");
	fprintf(fp,"%s\n","<h1 align=center>ABOUT US</h1>");
	fprintf(fp,"%s\n","<h2> Name : parmar krupa parmar</h2>");
	fprintf(fp,"%s\n","<h2> Age:19</h2>");
	fprintf(fp,"%s\n","<h2>School:vidhiya vihar sankul</h2>");
	fprintf(fp,"%s\n","<h2>Contect number: 9865743287</h2>");
	fprintf(fp,"%s\n","<h2> D.O.B:30/11/2004</h2>");
	fprintf(fp,"%s\n","<h2>Educatioin:Higher educatioin</h2>");
	
	
	
	
	fprintf(fp,"%s\n","</head>");
	fprintf(fp,"%s\n","</body>");
	fprintf(fp,"%s\n","</html>");
	
	
}