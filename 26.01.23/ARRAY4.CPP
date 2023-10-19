//WAP to do display matrix.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int m[2][2];
 clrscr();

 printf("Enter four elements: ");
 scanf("%d %d %d %d",&m[0][0],&m[0][1],&m[1][0],&m[1][1]);

 printf("The Matrix is:");
 printf("\n%d %d\n%d %d",m[0][0],m[0][1],m[1][0],m[1][1]);

 getch();
 return 0;
}