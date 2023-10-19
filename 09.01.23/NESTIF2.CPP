//WAP to find largest among two.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2;
clrscr();

printf("Enter two numbers: ");
scanf("%d %d",&num1, &num2);

if (num1>=num2)
 {
  if (num1>num2)
  {
  printf("%d is largest number",num1);
  }
   else
   {
   printf("Both numbers are equal");
   }
 }
else
{
printf("%d is largest number",num2);
}
getch();
}