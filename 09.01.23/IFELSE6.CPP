//WAP to check if entered two no are equal or not.
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

if (num1==num2)
{
printf("Both numbers are equal");
}
else
{
printf("The numberes are not equal");
}
printf("\nThank You");
getch();
}