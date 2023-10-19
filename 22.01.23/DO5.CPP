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
do
{
if(i%2==0)
{
printf("\t%d",i);
}
i++;
}
while(i<=10);
getch();
return 0;
}