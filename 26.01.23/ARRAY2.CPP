//WAP to do addition of any five numbers.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int a[4],s;
 clrscr();

 printf("Enter five numbers: ");
 scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);

 s=a[0]+a[1]+a[2]+a[3]+a[4];
 printf("The sum is %d",s);

 getch();
 return 0;

}