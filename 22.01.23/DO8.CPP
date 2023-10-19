//WAP to print sum of any numbers,with taking range.
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
printf("Enter a number to stop at: ");
scanf("%d",&j);
do
{
sum=sum+i;
i++;
}
while(i<=j);
printf("The sum is= %d",sum);
getch();
return 0;
}