//WAP using switch to perform calculator operations
/*Rakesh yadav
roll no. 1029*/
#include<stdio.h>
#include<conio.h>
int main()
{

float c,l,w,s;
int area;
clrscr();

printf("Calculate area of:\n1.Circle\n2.Rectangle\n3.Square");
printf("\nEnter sr. number only -> ");
scanf("%d",&area);


switch(area)
{

case 1:
printf("Enter radius of circle:");
scanf("%f",&c);
printf("The area of circle is=%f",3.14*c*c);
break;

case 2:
printf("Enter length of rectangel");
scanf("%f",&l);
printf("Enter width of rectangel");
scanf("%f",&w);
printf("The area of rectangle is=%f",l*w);
break;

case 3:
printf("Enter side of square");
scanf("%f",&s);
printf("The area of square is=%f",s*s);
break;

default:
printf("Invalid operation selected");
break;
}
getch();
return 0;
}