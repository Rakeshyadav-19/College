//WAP using switch to print calander.
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
for(month=1;month<=31;month++)
printf("%d\t",month);
break;

case 2:
printf("Enter year: ");
scanf("%d",&year);
if((year%4==0)&&(year%100!=0))
{
for(month=1;month<=29;month++)
printf("%d\t",month);
}
else
{
for(month=1;month<=28;month++)
printf("%d\t",month);
}
break;

case 4:
case 6:
case 9:
case 11:
for(month=1;month<=30;month++)
printf("%d\t",month);

break;
default:
printf("Invalid day number\nEnter between 1 to 7.");
break;
}
getch();
return 0;
}