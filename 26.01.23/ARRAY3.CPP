//WAP to do addition of any five numbers using array and for loop.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int i[4],k,s=0;
 clrscr();

 printf("Enter five numbers: ");

 for(k=0;k<5;k++)
 {
  scanf("%d",&i[k]);
  s=s+i[k];
 }
 printf("The sum is %d",s);

 getch();
 return 0;

}