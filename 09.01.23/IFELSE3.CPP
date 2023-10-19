//WAP to check if the user is eligible for entering AI&DS branch or not.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
float score;
clrscr();

printf("Enter your MHT-CET score: ");
scanf("%f",&score);

if (score>=78.89)
{
printf("You are applicable for AI&DS barnch.");
}
else
{
printf("You are not eligible for AI&DS branch");
}
printf("\nThank You");
getch();
}