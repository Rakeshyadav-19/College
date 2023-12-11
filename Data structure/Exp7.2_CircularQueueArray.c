#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 5
typedef struct {
    int data[QUEUE_SIZE];
    int front;
    int rear;
} Queue;
void enqueue(Queue * q, int value) {
    if(is_full(q)) 
    {
        printf("Queue is full\n");
        return;
    }
    q -> data[q -> rear] = value;
    q -> rear = (q -> rear + 1) % QUEUE_SIZE;
}
void dequeue(Queue * q) {
    if(is_empty(q)) 
    {
        printf("Queue is empty\n");
        return;
    }
    int value = q -> data[q -> front];
    q -> front = (q -> front + 1) % QUEUE_SIZE;
    printf("Dequeued: %d\n", value);
}
int is_full(Queue * q) {
    return (q -> rear + 1) % QUEUE_SIZE == q -> front;
}
int is_empty(Queue * q) {
    return q -> front == q -> rear;
}
void display(Queue * q) {
    int i;
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    } else {
        printf("Queue: ");
        for (i = q -> front; i != q -> rear; i = (i + 1) % QUEUE_SIZE) {
            printf("%d ", q -> data[i]);
        }
    }
    printf("\n");
}
int main() {
    int ch, data;
    Queue q;
    q.front = 0;
    q.rear = 0;
    printf("Name :Rakesh S. Yadav\n Roll no: 2029\n");
    printf("Circular Queue\n\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display All Elements\n4. Exit");
    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", & ch);
        if (ch == 1) {
            printf("Enter Element: ");
            scanf("%d", & data);
            enqueue( & q, data);
        } else if (ch == 2) {
            dequeue( & q);
        } else if (ch == 3) {
            display( & q);
        } else if (ch == 4) {
            exit(0);
        } else {
            printf("Invalid Choice\n");
        }
    } while (ch != 4);
    return 0;
}