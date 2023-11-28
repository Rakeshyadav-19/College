//To Implement Program for Queue using List
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *front = NULL, *rear = NULL;
void enqueue() { 
    int data;
    printf("Enter Value To Enqueue: ");
    scanf("%d", & data);
    struct Node * nptr = malloc(sizeof(struct Node)); 
    nptr -> data = data;
    nptr -> next = NULL;
    if (rear == NULL) { 
        front = nptr; 
        rear = nptr;
    } else {
        rear -> next = nptr; 
        rear = rear -> next;
    }
}
void dequeue() { 
    if (front == NULL) { 
        printf("Queue is Empty\n");
    } else {
        struct Node * temp = front;
        front = front -> next; 
        if (front == NULL) {
            rear = NULL; 
        }
        printf("Dequeued Element: %d\n", temp -> data); 
        free(temp); 
    }
}
void display() { 
    struct Node * temp = front;
    if (front == NULL) { 
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue is: ");
    while (temp != NULL) {
        printf(" %d ", temp -> data); 
        temp = temp -> next; 
    }
    printf("\n");
}
int main() {
    int ch; 
    printf("Name:Rakesh Yadav\nRoll no. 2029");
    printf("**Dynamic Queue**\n\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display All Elements\n4. Exit");
    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch); 
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
    } while(ch != 4); 
    return 0;
}