//WAP to do arithmatic operations.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2;
char op;
clrscr();

printf("Enter first number");
scanf("%d",&num1);
printf("Enter operatoion(initials only)");
scanf("%s",&op);
printf("Enter second number");
scanf("%d",&num2);

if(op=='a')
{
printf("The Addition is=%d",num1+num2);
}
else if(op=='m')
{
printf("The Multiplication is=%d",num1*num2);
}
else if(op=='s')
{
printf("The Substraction is=%d",num1-num2);
}
else if(op=='d')
{
printf("The Division is=%d",num1/num2);
}
else
{
printf("Invalid operation");
}
getch();
return 0;
}