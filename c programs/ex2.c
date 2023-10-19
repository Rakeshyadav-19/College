#include<stdio.h>

int main()
{ 
    int a;
    printf("Slect subjects you have passed: \n1.Science&Maths \n2.Science \n3.Maths\n");
    printf("Enter the subjects you have passed: ");
    scanf("%d",&a);

    if(a==1)
    {
        printf("You have won 45RS");
    }
  
    else
    {
         printf("You have won 15RS");
    }
    return 0;
}   