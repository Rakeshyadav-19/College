//WAP using switch to print no of days in month.
/*Rakesh yadav
roll no. 1029*/
#include<stdio.h>
#include<conio.h>
int main()
{
int month,year;
clrscr();

printf("Enter Month number: ");
scanf("%d",&month);

switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("It has 31 days");
break;

case 2:
printf("Enter year: ");
scanf("%d",&year);
if((year%4==0)&&(year%100!=0))
{
printf("It is leap year hence,It has 29 days");
}
else
{
printf("It has 28 days");
}
break;

case 4:
case 6:
case 9:
case 11:
printf("It has 30 days");
break;
default:
printf("Invalid day number\nEnter between 1 to 7.");
break;
}
getch();
return 0;
}