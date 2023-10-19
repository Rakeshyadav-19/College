//WAP to print factorial of any number.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j=1,k;
clrscr();
printf("Enter a number to find factorial:");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
j=j*i;
}
printf("The factorial of %d is: %d",k,j);
getch();
return 0;
}