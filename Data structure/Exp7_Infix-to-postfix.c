//Implementation of Infix to Postfix Expression
//24 Nov 10:24 AM
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_EXPR_SIZE 100
void push(char item, char stack[], int *top) {
    stack[++(*top)] = item;
}
char pop(char stack[], int *top) {
    return stack[(*top)--];
}
int is_operator(char symbol) {
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^') {
        return 1;
    }
    return 0;
}
int precedence(char symbol) {
    if (symbol == '^') {
        return 3;
    } else if (symbol == '*' || symbol == '/') {
        return 2;
    } else if (symbol == '+' || symbol == '-') {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char infix[MAX_EXPR_SIZE], postfix[MAX_EXPR_SIZE];
    char stack[MAX_EXPR_SIZE];
    int top = 0, i, j;
    printf("Name : Rakesh S. Yadav\nROll No:2029\n");
    printf("**Infix To Postfix**\n\n");
    printf("Enter an Infix Expression: ");
    scanf("%s", infix);
    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(infix[i], stack, &top);
        } else if (infix[i] == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop(stack, &top);
            }
            pop(stack, &top);
        } else if (is_operator(infix[i])) {
            while (is_operator(stack[top]) && precedence(infix[i]) <= precedence(stack[top])) {
                postfix[j++] = pop(stack, &top);
            }
            push(infix[i], stack, &top);
        }
    }
    while (top > 0) {
        postfix[j++] = pop(stack, &top);
    }
    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
    return 0;
}