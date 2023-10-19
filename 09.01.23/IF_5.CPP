//WAP to check if the first entered no is greater than second.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2;
clrscr();

printf("Enter two number: ");
scanf("%d %d",&num1 ,&num2);

if (num1>num2)
{
printf("1st number is greater");
}
printf("\nThank You");
getch();
}