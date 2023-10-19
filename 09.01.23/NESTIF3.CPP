//WAP to Marriage criteria for male and female.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int age;
char g;
clrscr();

printf("NOTE:-Type in capital[caps]");
printf("\nEnter your gender[M/F]:");
scanf("%c",&g);

printf("Enter your age ");
scanf("%d",&age);

if (g=='M')
{
 if (age>18)
 {
 printf("Male is eligible for marriage");
 }
  else
  {
  printf("Male is not eligible for marriage");
  }
}
else
{
 if (g=='F')
 {
  if(age>21)
  {
  printf("Female is eligible for marriage");
  }
   else
   {
   printf("Female is not eligible for marriage");
   }
 }
  else
  {
  printf("Incorrect gender entered");
  }
}
getch();
}
