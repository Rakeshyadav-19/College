//WAP to know prices of items in menu.
/*Rakesh Yadav
Roll no. 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();
printf("To know the price");
printf("1.Vadapav\n2.Tea\n3.Samosa\n4.Idli\n5.Coffee");

printf("\n\nEnter Sr. number only");
scanf("%d",&num);

if(num==1)
{
printf("The price of item is 20Rs");
}
else
{
 if(num==2)
 {
 printf("The price of item is 10Rs.");
 }
  else
  {
   if(num==3)
   {
   printf("The price of item is 15Rs.");
   }
    else
    {
     if(num==4)
     {
     printf("The price of item is 25Rs.");
     }
      else
      {
      printf("The price of item is 30Rs.");
      }
    }
  }
}

getch();
return 0;
}