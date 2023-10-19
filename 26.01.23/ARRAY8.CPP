//WAP to do display sum of matrix elements.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int m[10][10],s=0;
 int row,col,i,j;
 clrscr();

 printf("Enter number of rows");
 scanf("%d",&i);
 printf("Enter number of columns");
 scanf("%d",&j);

 for(row=0;row<i;row++)
 {
  for(col=0;col<j;col++)
  {
   printf("Enter the %d%d element of matrix: ",row,col);
   scanf("%d",&m[row][col]);
  }
 }

 for(row=0;row<i;row++)
 {
  for(col=0;col<j;col++)
  {
   s=s+m[row][col];
  }
 }

 printf("\nThe sum is:%d",s);

 getch();
 return 0;
}