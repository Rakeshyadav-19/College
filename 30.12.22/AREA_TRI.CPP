//WAP to calculate area of Triangle.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
main()
{
float b,h,a;
clrscr();

printf("Area of Triangle");

printf("\n\nEnter length of Base");
scanf("%f",&b);
printf("Enter length of Height");
scanf("%f",&h);

a=0.5*b*h;
printf("\nArea of Triangle= %f sq.unit",a);

getch();
}


