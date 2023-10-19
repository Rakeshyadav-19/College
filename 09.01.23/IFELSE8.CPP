//WAP to find ratio a-b/c-d when denominator is not zero.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,d;
clrscr();

printf("Enter four numbers: ");
scanf("%f %f %f %f",&a ,&b ,&c ,&d);

if (c-d>0)
{
printf("The ratio a-b/c-d=%f",(a-b)/(c-d));
}
else
{
printf("Denominator either Zero OR Negative");
}
printf("\nThank You");
getch();
}