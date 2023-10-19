#include<stdio.h>

int main()
{
    char a[100];
    printf("Enter your name");
    gets(a);

    if(strcmp(a,"rakesh") == 0)
    {
        printf("Hello");
    }

    else if(strcmp(a,"chotu") == 0)
    {
        printf("Hii");
    }

    else
    {
        printf("okk");
    }
    return 0;
}