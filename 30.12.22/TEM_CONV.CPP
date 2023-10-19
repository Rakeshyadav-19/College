//WAP To convert temperatures.
/*Rakesh Yadav
Roll no.1029*/

#include<stdio.h>
#include<conio.h>
main()
{
float a,b,d,c,e,g,f,k;
clrscr();

printf("Enter the temperature in Celsius:    c\b\b\b\b\b");
scanf("%f",&a);
f=(9*a+160)/5;
printf("The temperature in Fahrenheit is: %f F",f);

printf("\n\nEnter the temperature in Fahrenheit:    F\b\b\b\b\b");
scanf("%f",&e);
g=(5*e-160)/9;
printf("The temperature in celsius is: %f C",g);

printf("\n\nEnter the temperature in Celsius:    C\b\b\b\b\b");
scanf("%f",&b);
k=b+273.15;
printf("The temperature in Kelvin is: %f k",k);

printf("\n\nEnter the temperature in Kelvin:    K\b\b\b\b\b");
scanf("%f",&d);
c=d-273.15;
printf("The temperature in celsius is: %f C",c);

getch();
}