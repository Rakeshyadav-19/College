//WAP to calculate Perimeter of Triangle.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
main()
{
float l,e;
float i,a,b;
float s,m,n,o;
clrscr();

printf("Perimeter of Equilateral Triangle");
printf("\nEnter length of triangle");
scanf("%f",&l);
e=3*l;
printf("Perimeter of Equilateral Triangle= %f unit",e);

printf("\n\nPerimeter of Isosceles Triangle");
printf("\nEnter length of triangle");
scanf("%f",&a);
printf("Enter other lenght of Triangle");
scanf("%f",&b);
i=(2*a)+b;
printf("Perimeter of Isosceles Triangle= %f unit",i);

printf("\n\nPerimeter of Scalene Triangle");
printf("\nEnter first length of triangle");
scanf("%f",&m);
printf("Enter second lenght of Triangle");
scanf("%f",&n);
printf("Enter third lenght of Triangle");
scanf("%f",&o);
s=m+n+o;
printf("Perimeter of Scalene Triangle= %f unit",s);

getch();
}


