//WAP to check if the entered no is even.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();

printf("Enter a number: ");
scanf("%d",&num);

if (num%2==0)
{
printf("The entered number is even");
}
printf("\nThank You");
getch();
}