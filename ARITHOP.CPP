//Arithmatic operations.
/*Rakesh Yadav
roll no 1029*/
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c,d,g,h,i,j;
float e,f;
clrscr();

printf("\nenter first number");
scanf("%d", &a);
printf("enter second number");
scanf("%d", &b);
printf("THe sum is=%d",a+b);

printf("\nenter first number");
scanf("%d",&c);
printf("enter second number");
scanf("%d", &d);
printf("THe substraction is=%d",c-d);

printf("\nenter first number");
scanf("%f",&e);
printf("enter second number");
scanf("%f",&f);
printf("THe dividion is=%f",e/f);

printf("\nenter first number");
scanf("%d",&g);
printf("enter second number");
scanf("%d", &h);
printf("THe multiplication is=%d",g*h);

printf("\nenter first number");
scanf("%d",&i);
printf("enter second number");
scanf("%d", &j);
if(i>j)
printf("THe value Mod is=%d",i%j);
else
printf("Numerator should be greater than denominator");


getch();
}
