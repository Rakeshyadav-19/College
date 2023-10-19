//WAP using switch to check marriage criteria using switch statement.
/*Rakesh yadav
roll no. 1029*/
#include<stdio.h>
#include<conio.h>
int main()
{
int age;
char gender;
char name[12];
clrscr();

printf("Enter Your name: ");
scanf("%s",&name);
printf("Welcome %s please enter your gender below ->",name);
printf("\nEnter gender [M/F]");
scanf("%s",&gender);
printf("Enter your age %s: ",name);
scanf("%d",&age);

switch(gender)
{
case 'M':
if(age>18)
{
printf("Congratulations %s you are eligible for marriage",name);
}
else
printf("%s try again after %d years",name,18-age);
break;

case 'F':
if(age>21)
{
printf("Congratulation %s you are eligible for marriage",name);
}
else
{
printf("%s try again after %d years",name,21-age);
}
break;

default:
printf("Invalid gender:\n Try agian by entering initials only in capital");
break;
}
getch();
return 0;
}