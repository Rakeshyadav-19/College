//WAP to calculate Net pay and other amounts from basic pay of employe.
/*Rakesh Yadav
Roll no. 1029*/
#include<stdio.h>
#include<conio.h>
main()
{
float BP,DA,HRA,TAX,GP;
clrscr();

printf("Enter your Basic Pay;");
scanf("%f",&BP);

DA=0.43*BP;
printf("\nYour Dearness Allowance=%f Rs.",DA);

HRA=0.15*BP;
printf("\nYour House Rent Allowance=%f Rs.",HRA);

TAX=0.2*BP;
printf("\nTAX amount=%f Rs.",TAX);

GP=BP+DA+HRA;
printf("\nYour Gross Pay=%f Rs.",GP);

printf("\nYour Net Pay=%f Rs.",GP-TAX);

getch();
}