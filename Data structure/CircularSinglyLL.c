#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
struct Node * head = NULL;
void insertStart(int data) {
    struct Node * temp = head;
    struct Node * newNode = (struct Node * ) malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = head;
    if (head != NULL) {
        while (temp -> next != head)
            temp = temp -> next;
        temp -> next = newNode;
    } else {
        newNode -> next = newNode;
    }
    head = newNode;
}
void insertEnd(int data) {
    struct Node * newNode = (struct Node * ) malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = head;
    if (head == NULL) {
        head = newNode;
        newNode -> next = newNode;
        return;
    }
    struct Node * temp = head;
    while (temp -> next != head)
        temp = temp -> next;
    temp -> next = newNode;
}
void deleteStart() {
    struct Node * temp = head, * prev = head;
    if (head == NULL) {
        printf("List is Empty\n");
        return;
    }
    while (prev -> next != head)
        prev = prev -> next;
    prev -> next = head -> next;
    head = head -> next;
    free(temp);
    printf("Node Deleted\n");
}
void deleteEnd() {
    struct Node * temp = head, * prev;
    if (head == NULL) {
        printf("List is Empty\n");
        return;
    }
    while (temp -> next != head) {
        prev = temp;
        temp = temp -> next;
    }
    if (temp == head) {
        head = NULL;
        free(temp);
    } else {
        prev -> next = head;
        free(temp);
    }
    printf("Node Deleted\n");
}
void search(int data) {
    struct Node * temp = head;
    int count = 1, flag = 0;
    if (head != NULL) {
        do {
            if (temp -> data == data) {
                printf("[[Node->Data: %d]] Found at %d Position in List", temp -> data, count);
                flag = 1;
            }
            temp = temp -> next;
            count++;
        } while (temp != head);
        if (flag == 0) {
            printf("Node not found");
        }
    } else {
        printf("List is Empty");
    }
    printf("\n");
}
void display() {
    struct Node * temp = head;
    if (head != NULL) {
        printf("List is: ");
        do {
            printf("%d ", temp -> data);
            temp = temp -> next;
        } while (temp != head);
    } else {
        printf("List is Empty");
    }
    printf("\n");
}
int getData() {
    int data;
    printf("Enter Element: ");
    scanf("%d", & data);
    return data;
}
int main() {
    int ch;
    printf("*****Circular Singly Linked List*****\n\n");
    printf("1. Insert Start\n2. Insert End\n3. Delete Start\n4. Delete End\n5. Search\n6. Display\n7. Exit");
    do {
        printf("\nEnter Your Choice: ");
        scanf("%d", & ch);
        if (ch == 1) {
            insertStart(getData());
        } else if (ch == 2) {
            insertEnd(getData());
        } else if (ch == 3) {
            deleteStart();
        } else if (ch == 4) {
            deleteEnd();
        } else if (ch == 5) {
            search(getData());
        } else if (ch == 6) {
            display();
        } else if (ch == 7) {
            exit(0);
        } else {
            printf("Invalid Choice");
        }
    } while (ch != 7);
    return 0;
}