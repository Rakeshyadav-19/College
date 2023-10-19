//TO swap numbers.
/*Rakesh Yadav
roll no. 1029*/
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;

clrscr();

printf("enter first number a= ");
scanf("%d", &a);
printf("Enter second number b= ");
scanf("%d", &b);

c=a;
a=b;
b=c;

 printf("\n\nThe swaped value of a=%d",a);
 printf("\nThe swaped value of b=%d",b);
getch();

}