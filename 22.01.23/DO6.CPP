//WAP to print all alphabets.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
char i='A';
clrscr();
printf("The Alphabets are:\n");
do
{
printf("%c\t",i);
i++;
}
while(i<='Z');
getch();
return 0;
}