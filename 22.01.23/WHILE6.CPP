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
while(i<='Z')
{
printf("%c\t",i);
i++;
}
getch();
return 0;
}