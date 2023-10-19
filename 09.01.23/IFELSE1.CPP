//WAP to check ifelgible for voting or not, consider false condition also.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int age;
clrscr();

printf("Enter your age: ");
scanf("%d",&age);

if (age>18)
{
printf("You are eligible for voting");
}
else
{
printf("You are not eligible for voting");
}
printf("\nThank You");
getch();
}