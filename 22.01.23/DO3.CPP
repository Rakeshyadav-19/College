//WAP to print sum of 1 to 10 numbers.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i=0,j=0;
clrscr();

do
{
i++;
j=j+i;
}
while(i<10);
printf("The sum is %d",j);

getch();
return 0;
}