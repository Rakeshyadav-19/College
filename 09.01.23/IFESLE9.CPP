//WAP to find if user is eligible for military selection.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
float weight,height;
clrscr();

printf("Enter your Weight:   Kg\b\b\b\b\b");
scanf("%f",&weight);

printf("Enter your Height:   Cm\b\b\b\b\b");
scanf("%f",&height);

if (weight<50&&height>170)
 {
 printf("You are eligible for military selection");
 }
else
{
 if (weight>50)
 {
 printf("Your weight does not qualify the selection");
 }
  if (height<170)
  {
  printf("\nYour Height does not qualify for the selection");
  }
}
printf("\nThank You");
getch();
}