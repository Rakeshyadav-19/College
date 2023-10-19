//sizeof operator.
/*Rakesh Yadav
roll no 1029*/
#include<stdio.h>
#include<conio.h>

int main()
{

int i;
float f;
double d;
char c;
clrscr();


printf("enter a integer");
scanf("%d",&i);
printf("The size of integer i= %d",sizeof(i));

printf("\n\nenter a float");
scanf("%f",&f);
printf("The size of float f= %d",sizeof(f));

printf("\n\nenter a character");
scanf("%d",&c);
printf("The size of character c= %d",sizeof(c));

d=98.4;
printf("\n\nThe size of double d=98.4 =
 %d",sizeof(d));

getch();
}
