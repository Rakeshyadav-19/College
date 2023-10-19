//WAP to print sum of any 10 numbers.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,sum=0;
clrscr();
printf("Enter a number to start from: ");
scanf("%d",&i);
j=i+10;
for(i;i<j;i++)
{
sum=sum+i;
}
printf("The sum is= %d",sum);
getch();
return 0;
}