//WAP to do display sum of two matrix.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int m1[10][10],m2[10][10],m3[10][10];
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
   printf("Enter the %d%d elements of matrix 1: ",row,col);
   scanf("%d",&m1[row][col]);
  }
 }

 for(row=0;row<i;row++)
 {
  for(col=0;col<j;col++)
  {
   printf("Enter the %d%d elements of matrix 2: ",row,col);
   scanf("%d",&m2[row][col]);
  }
 }

  for(row=0;row<i;row++)
 {
  for(col=0;col<j;col++)
  {
   m3[row][col]=m1[row][col]+m2[row][col];
  }
 }

 printf("The sum of matrix is:\n");
 for(row=0;row<i;row++)
 {
  for(col=0;col<j;col++)
  {
   printf("%d ",m3[row][col]);
  }
  printf("\n");
 }

 getch();
 return 0;
}