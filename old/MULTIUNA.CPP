#include<stdio.h>
#include<conio.h>
main()
{
int i=4,j,k;
clrscr();
j=i++;
printf("value ofj=%d",j);
j=i--;
printf("\nvalue of j=%d",j);
printf("\nvalue of j=%d",i);
j=++i;
printf("\nvalue of j=%d",j);
getch();
}