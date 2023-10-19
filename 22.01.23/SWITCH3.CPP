//WAP using switch to print day name.
/*Rakesh yadav
roll no. 1029*/
#include<stdio.h>
#include<conio.h>
int main()
{
int day;
clrscr();

printf("Enter day number: ");
scanf("%d",&day);

switch(day)
{
case 1:
printf("Monday");
break;

case 2:
printf("Tuesday");
break;

case 3:
printf("Wednesday");
break;

case 4:
printf("Thusrday");
break;

case 5:
printf("Friday");
break;

case 6:
printf("Saturday");
break;

case 7:
printf(":)Sunday:)");
break;

default:
printf("Invalid day number\nEnter between 1 to 7.");
break;
}
getch();
return 0;
}