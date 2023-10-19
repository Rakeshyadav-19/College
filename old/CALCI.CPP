//if else loop.
/*Rakesh Yadav
roll no 1029*/
#include<stdio.h>
#include<conio.h>

int main()
{
int i,j;
char k;
clrscr();

printf("Enter two number");
scanf("%d %d", &i,&j);

printf("Enter operator=");
scanf("%c",&k);

if(k=='+'){
printf("The addition is=%d",i+j);
}

else if(k=='-'){
printf("\nThe substraction is=%d",i-j);
}

else if(k=='*'){
printf("\nThe smaller no is=%d",i );
}

else if(k=='/'){
printf("\nThe division is= %d",i/j);
}

else if(k=='%'){
printf("the remainder is= %d",i%j);
}

getch();
}
