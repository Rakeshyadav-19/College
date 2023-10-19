//WAP to find largest number among 3.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2,num3;
clrscr();

printf("Enter thrree numbers: ");
scanf("%d %d %d",&num1, &num2, &num3);

if (num1>num2)
{
 if (num1>num3)
 {
 printf("%d is largest number",num1);
 }
  else
  {
  printf("%d is largest number",num3);
  }
}
 else
 {
  if(num2>num1)
  {
   if(num2>num3)
   {
   printf("%d is largest number",num2);
   }
    else
    {
    printf("%d is largest number",num3);
    }
  }
 }
getch();
}
