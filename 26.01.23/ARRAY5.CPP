//WAP to do display matrix using for loop.
/*Rakesh Yadav
roll no 1029*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int m[2][2];
 int row,col;
 clrscr();

 for(row=0;row<2;row++)
 {
  for(col=0;col<2;col++)
  {
   printf("Enter the %d%d elements: ",row,col);
   scanf("%d",&m[row][col]);
  }
 }

 printf("The matrix is:\n");
 for(row=0;row<2;row++)
 {
  for(col=0;col<2;col++)
  {
   printf("%d ",m[row][col]);
  }
  printf("\n");
 }

 getch();
 return 0;
}