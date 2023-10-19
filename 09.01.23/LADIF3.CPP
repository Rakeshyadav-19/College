//WAP to test wether given number is positive or not.
/*Rakesh Yadav
Roll no. 1029*/
#include<stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();

printf("Enter a number");
scanf("%d",&num);

if(num>0)
{
printf("The number is positive");
}

else if(num<0)
{
printf("The number is negative");
}

else
{
printf("The number is negative");
}

getch();
return 0;

}