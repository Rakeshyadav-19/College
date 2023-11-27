//Name :Rakesh .S. Yadav Roll no: 2029
//Program for Factorial using Recursion*/
#include <stdio.h>
int factorial(int n) 
{ 
    if (n == 0) 
    { 
        return 1;
    }
    return n * factorial(n - 1); 
}

int main() 
{
    int n;
   	printf("Name :Rakesh S. Yadav\nRoll no: 2029\n");
	printf("Enter a positive integer: ");
    do { 
        scanf("%d", & n);
        if (n < 0) {
            printf("(Invalid) Enter a positive integer: ");
        }
    } while (n < 0);
    printf("The factorial of %d is %d\n", n, factorial(n)); 
    return 0;
}