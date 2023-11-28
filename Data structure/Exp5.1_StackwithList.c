#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();
struct node
{
int val;
struct node *next;
};
struct node *head;

void main ()
{
    int choice=0;
	printf("Name:Rakesh Yadav\nRoll no. 2029");
    printf("\n**Implimentation of Stack operations using linked list**");
    printf("\n----------------------------------------------");
	printf("\nChose one from the below options");
	printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
    while(choice != 4)
    {
	printf("\n Enter your choice \n");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    {
		push();
		break;
	    }
	    case 2:
	    {
		pop();
		break;
	    }
	    case 3:
	    {
		display();
		break;
	    }
	    case 4:
	    {
		printf("Exiting....");
		break;
	    }
	    default:
	    {
		printf("Please Enter valid choice ");
	    }
    };
}
}
void push ()
{
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
	printf("not able to push the element");
    }
    else
    {
	printf("Enter the value");
	scanf("%d",&val);
	if(head==NULL)
	{
	    ptr->val = val;
	    ptr -> next = NULL;
	    head=ptr;
	}
	else
	{
	    ptr->val = val;
	    ptr->next = head;
	    head=ptr;
	}
	printf("Item pushed");

    }
}

void pop()
{
    int temp;
    struct node *ptr;
    if (head == NULL)
    {
	printf("Underflow");
    }
    else
    {
	temp = head->val;
	ptr = head;
	head = head->next;
	free(ptr);
	//free(&temp);
	printf("Item popped");

    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
	printf("Stack is empty\n");
    }
    else
    {
	printf("Printing Stack elements \n");
	while(ptr!=NULL)
	{
	    printf("%d\n",ptr->val);
	    ptr = ptr->next;
	}
    }
}