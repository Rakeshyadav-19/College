//WAP to read character from user and display it.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
char i;
clrscr();

printf("Enter a character- ");
scanf("%c",&i);

printf("The character is: %c",i);

getch();
return 0;
}