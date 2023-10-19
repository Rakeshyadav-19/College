//WAP to calculate Simple Interest
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
main()
{
float s,p,r,t;
clrscr();
printf("To calculate Intrest Amount:");

printf("\nEnter Money Invested or Borrowed Rs.:");
scanf("%f",&p);

printf("Enter Annnual rate of interest %:");
scanf("%f",&r);

printf("Enter the length of time(IN YEARS) you Invest or Borrowed:");
scanf("%f",&t);

s=(p*r*t)/100;
printf("The interest amount is=%f Rs.",s);

printf("\nThe total Amount is=%f Rs.",p+s);

getch();
}

