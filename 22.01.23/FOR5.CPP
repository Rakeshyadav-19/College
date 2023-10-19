//WAP to print even number between 1 to 10 numbers.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i=1;
clrscr();
printf("The even numbers are:");
for(i;i<=10;i++)
{
if(i%2==0)
{
printf("\t%d",i);
}
}
getch();
return 0;
}