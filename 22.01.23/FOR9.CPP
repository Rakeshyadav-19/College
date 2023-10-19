//WAP to print factorial of 5.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j=1;
clrscr();
for(i=5;i>=1;i--)
{
j=j*i;
}
printf("The factorial of 5 is: %d",j);
getch();
return 0;
}