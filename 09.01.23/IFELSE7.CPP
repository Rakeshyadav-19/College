//WAP to check if female is eligible for marriage or not.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int age;
clrscr();

printf("Enter male age: ");
scanf("%d",&age);

if (age>21)
{
printf("Female is eligible for marriage");
}
else
{
printf("Female is not eligible for marriage");
}
printf("\nThank You");
getch();
}