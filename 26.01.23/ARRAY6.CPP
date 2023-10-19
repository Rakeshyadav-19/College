//WAP to do display matrix using for loop.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int m[10][10];
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
   printf("Enter the %d%d elements: ",row,col);
   scanf("%d",&m[row][col]);
  }
 }

 printf("The matrix is:\n");
 for(row=0;row<i;row++)
 {
  for(col=0;col<j;col++)
  {
   printf("%d ",m[row][col]);
  }
  printf("\n");
 }

 getch();
 return 0;
}