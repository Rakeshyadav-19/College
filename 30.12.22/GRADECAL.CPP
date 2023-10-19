//WAP to calculate Grade of student.
/*Rakesh Yadav
Roll no. 1029*/
#include<stdio.h>
#include<conio.h>
main()
{
int IT;
float E,H,M,S,SS,sum;
float p;
char str[30];
clrscr();

printf("Enter your Name;");
scanf("%s",&str);

printf("Enter Marks scored in English:");
scanf("%f",&E);

printf("Enter Marks scored in Hindi:");
scanf("%f",&H);

printf("Enter Marks scored in Maths:");
scanf("%f",&M);

printf("Enter Marks scored in Science:");
scanf("%f",&S);

printf("Enter Marks scored in Social Science:");
scanf("%f",&SS);

printf("Enter Marks scored in Information Technology:");
scanf("%d",&IT);

sum=E+H+M+S+SS;
printf("\n%s your score out of 500=%f",str, sum);
printf("\n%s your score in Additional subject=%d",str,IT);

p=sum/5;
printf("\n%s your percentage=%f%",str,p);

getch();
}