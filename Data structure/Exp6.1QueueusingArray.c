//To Implement Program for Queue using array.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 10
int queue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue() {
    int data;
    if ((rear + 1) % MAX_SIZE == front) {
        printf("Queue is full\n");
        return;
    }
   printf("Enter Value To Enqueue: ");
    scanf("%d", & data);
    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }
    queue[rear] = data;
}
void dequeue() {
    int value = queue[front];
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
    printf("Dequeued Element: %d\n", value);
}
void display() {
    int i;
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue is : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main() {
    int ch;
    printf("Name:Rakesh Yadav\nRoll no. 2029");
    printf("**Static Queue**\n\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display All Elements\n4. Exit");
    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", & ch);
        if (ch == 1) {
            enqueue();
        } else if (ch == 2) {
            dequeue();
        } else if (ch == 3) {
            display();
        } else if (ch == 4) {
            exit(0);
        } else {
            printf("Invalid Choice\n");
        }
    } while (ch != 4);
    return 0;
}