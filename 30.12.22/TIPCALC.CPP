//WAP to calculate Tip.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
main()
{
float amount,per,tip;
clrscr();

printf("Enter total amount of bill: ");
scanf("%f",&amount);

printf("Enter Tip % you want to give: ");
scanf("%f",&per);

tip=(per/100)*amount;
printf("The tip amount=%f",tip);
printf("\nTotal amount to pay=%f",tip+amount);

getch();
}


