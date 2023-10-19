//WAP to find Grade of student and give remark.
/*Rakesh Yadav
Roll no. 1029*/
#include<stdio.h>
#include<conio.h>
main()
{
float p;
char str[30];
clrscr();

printf("Enter your Name;");
scanf("%s",&str);

printf("%s Enter your CGPA:",str);
scanf("%f",&p);

if (p>=9.0&&p<=10.0)
{
printf("Cogratulations %s you passed with \"First Class-Exemplary\"",str);
}

else if (p>=7.5&&p<9.0)
{
printf("Cogratulations %s you passed with \"First Class with Distinction\"",str);
}

else if (p>=6.0&&p<7.5)
{
printf("Cogratulations %s you passed with \"First Class\"",str);
}

else if (p>=5.0&&p<6.0)
{
printf("Cogratulations %s you passed with \"second class\"",str);
}

else if (p>=4.0&&p<5.0)
{
printf("%s you passed with \"Third Class\"",str);
}

else
{
printf("\"Better Luck Next Time %s\"",str);
}
getch();
}