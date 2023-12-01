#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef struct deque {
    int items[MAX_SIZE];
    int front;
    int rear;
} deque;
void init(deque * q) {
    q -> front = -1;
    q -> rear = -1;
}
int is_empty(deque * q) {
    return (q -> front == -1 && q -> rear == -1);
}
int is_full(deque * q) {
    return (q -> rear + 1) % MAX_SIZE == q -> front;
}
void insert_front(deque * q, int val) {
    if (is_full(q)) {
        printf("Queue is full\n");
        return;
    } else if (is_empty(q)) {
        q -> front = 0;
        q -> rear = 0;
    } else if (q -> front == 0) {
        q -> front = MAX_SIZE - 1;
    } else {
        q -> front--;
    }
    q -> items[q -> front] = val;
}
void insert_rear(deque * q, int val) {
    if (is_full(q)) {
        printf("Queue is full\n");
       return;
    } else if (is_empty(q)) {
        q -> front = 0;
        q -> rear = 0;
    } else if (q -> rear == MAX_SIZE - 1) {
        q -> rear = 0;
    } else {
        q -> rear++;
    }
    q -> items[q -> rear] = val;
}
void delete_front(deque * q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    } else if (q -> front == q -> rear) {
        q -> front = -1;
        q -> rear = -1;
    } else if (q -> front == MAX_SIZE - 1) {
        q -> front = 0;
    } else {
        q -> front++;
    }
    printf("Element Dequed\n");
}
void delete_rear(deque * q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    } else if (q -> front == q -> rear) {
        q -> front = -1;
        q -> rear = -1;
    } else if (q -> rear == 0) {
        q -> rear = MAX_SIZE - 1;
    } else {
        q -> rear--;
    }
    printf("Element Dequed\n");
}
void display(deque * q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    }
    int i;
    for (i = q -> front; i != q -> rear; i = (i + 1) % MAX_SIZE) {
        printf("%d ", q -> items[i]);
    }
    printf("%d\n", q -> items[i]);
}
int main() {
    int ch, data;
    deque q;
    init( & q);
    printf("Name :Rakesh S. Yadav\n Roll no: 2029\n");
    printf("**Double Ended Queue**\n\n");
    printf("1. Enqueue Start\n2. Enqueue End\n3. Dequeue Start\n4. Dequeue End\n5. Display\n6. Exit");
    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", & ch);
        switch (ch) {
        case 1:
            printf("Enter Element: ");
            scanf("%d", & data);
            insert_front( & q, data);
            break;
        case 2:
            printf("Enter Element: ");
            scanf("%d", & data);
            insert_rear( & q, data);
            break;
        case 3:
            delete_front( & q);
            break;
        case 4:
            delete_rear( & q);
            break;
        case 5:
            display( & q);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (ch != 6);
    return 0;
}