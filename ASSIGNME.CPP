//Assignment operator.
/*Rakesh Yadav
roll no 1029*/
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;
clrscr();

printf("Enter a number");
scanf("%d",&a);
printf("The value of a+5 is:%d",a+=5);
printf("\nThe value of a*5 is:%d",a*=5);
printf("\nThe value of a-5 is:%d",a-=5);
printf("\nThe value of a/5 is:%d",a/=5);

getch();
}
