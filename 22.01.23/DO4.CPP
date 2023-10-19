//WAP to print odd number between 1 to 50 numbers.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i=1;
clrscr();
printf("The odd numbers are:");
do
{
if(i%2!=0)
{
printf("\t%d",i);
}
i++;
}
while(i<=50);
getch();
return 0;
}