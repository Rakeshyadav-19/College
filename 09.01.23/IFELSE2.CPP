//WAP to check if the user is eligible for driving test or not.
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
printf("You are eligible for Driving test");
}
else
{
printf("You are not eligilbe for driving test");
}
printf("\nThank You");
getch();
}