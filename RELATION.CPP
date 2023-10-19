//Relational operator.
/*Rakesh Yadav
roll no 1029*/
#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,k,l,m,n;

clrscr();

printf("Enter two number");
scanf("%d %d", &i, &j);
if(i>j)
printf("The greater no. is=%d",i);
else
printf("\nThe greater no is=%d",j);


printf("Enter two number");
scanf("%d %d", &k, &l);
if(k<l)
printf("\nThe smaller no is=%d",k);
else
printf("\nThe smaller no is=%d",l);


printf("\nEnter two number");
scanf("%d %d", &m ,&n);
if(m==n)
printf("\nTHe numbers are equal");
else
printf("\nTHe numbers are not equal");

getch();
}
