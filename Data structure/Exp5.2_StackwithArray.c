#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void isEmpty() {
    if (top == -1) {
        printf("Stack is empty: Underflow State\n");
    } else {
        printf("Stack is not empty\n");
    }
}
void push() {
    int data;
    if (top == MAX_SIZE - 1) {
        printf("Error: stack is full\n");
        return;
    }
    printf("Enter Value To Push: ");
    scanf("%d", & data);
    top++;
    stack[top] = data;
}
void pop() {
    if (top == -1) {
        printf("Error: Stack is Empty\n");
        return;
    }
    int value = stack[top];
    top--;
    printf("Popped Value: %d\n", value);
}
void peek() {
    if (top != -1)
        printf("Topmost Element: %d\n", stack[top]);
    else
        printf("Stack is Empty: Underflow State\n");
}
int main() {
    int ch;
    printf("Name:Rakesh Yadav\nRoll no. 2029");
    printf("\n1. Push\n2. Pop\n3. Peek\n4. is Empty?\n5. Exit");
    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", & ch);
        if (ch == 1) {
            push();
        } else if (ch == 2) {
            pop();
        } else if (ch == 3) {
            peek();
        } else if (ch == 4) {
            isEmpty();
        } else if (ch == 5) {
            exit(0);
        } else {
            printf("Invalid Choice\n");
        }
    } while (ch != 5);
    return 0;
}