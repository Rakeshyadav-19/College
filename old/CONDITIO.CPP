//WAP to use conditional operator
/*Rakesh Yadav
Roll no- 1029*/
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,e,f;
clrscr();

printf("enter two no.");
scanf("%d %d" ,&a ,&b);
c=(a>b)?a:b;
printf("The larger number is= %d",c);

printf("\nenter two no.");
scanf("%d %d" ,&d ,&e);
f=(d<e)?d:e;
printf("The smaller number is= %d",f);


getch();
}