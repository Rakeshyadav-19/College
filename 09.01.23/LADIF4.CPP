//WAP to chech entered character is vovel or not.
/*Rakesh Yadav
Roll no. 1029*/
#include<stdio.h>
#include<conio.h>
int main()
{
char j;
clrscr();

printf("Enter a character: ");
scanf("%c",&j);

if(j=='a'||j=='e')
{
printf("%c is vovel",j);
}
else if(j=='i'||j=='o')
{
printf("%c is vovel",j);
}
else if(j=='u')
{
printf("%c is vovel",j);
}
else
{
printf("%c is not a vovel",j);
}
getch();
return 0;
}