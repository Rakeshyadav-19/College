/*DOUBLY LINKED LIST*/
//Function to delete a node at the start of the doubly linked list:-
void deleteAtStart(struct Node** head) 
{
    if (*head == NULL)
    {
    printf("List is empty. Deletion not possible.\n");
    return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    if (*head != NULL) 
    {
        (*head)->prev = NULL;
    }
    free(temp);
}

// Function to delete a node at the end of the doubly linked list
void deleteAtEnd(struct Node** head) 
{
    if (*head == NULL) 
    {
  printf("List is empty. Deletion not possible.\n");
  return;
    }
    struct Node* current = *head;
    while (current->next != NULL) 
    {
        current = current->next;
    }
    if (current->prev != NULL) 
    {
        current->prev->next = NULL;
    } 
    else 
    {
        *head = NULL;  // The list had only one node
    }
    free(current);
}

//Function to delete a node at a specific position in the doubly linked list:- 
void deleteAtPosition(struct Node** head,int position)
{
    if (*head == NULL) 
    {
    printf("List is empty. Deletion not possible.\n");
    return;
    }
    struct Node* current = *head;
    int count = 0;
    while (current != NULL && count < position) 
    {
        current = current->next;
        count++;
    if (current == NULL) 
    {
      printf("Position %d is out of range. Deletion not possible.\n", position);
      return;
    }
    if (current->prev != NULL) 
    {
        current->prev->next = current->next;
    } 
    else 
    {
        *head = current->next;
    }
    if (current->next != NULL) 
    {
        current->next->prev = current->prev;
    }
    free(current);
    }
}

-----------------------------------------------------------------

/*CIRCULAR DOUBLY LINKED LIST*/
// Function to delete a node at the beginning of a circular doubly linked list:

void deleteAtBeginning(struct Node** head) 
{
    if (*head == NULL) 
    {
    printf("List is empty. Deletion not possible.\n");
    return;
    }
    struct Node* toDelete = *head;
    if(toDelete->next == *head) 
    {
       *head = NULL;
    }
    else
    {
       (*head)->prev->next = toDelete->next;
       toDelete->next->prev = (*head)->prev;
       *head = toDelete->next;
    }
    free(toDelete);
}

// Function to delete a node at the end of a circular doubly linked list
void deleteAtEnd(struct Node** head) 
{
    if (*head == NULL) 
    {
      printf("List is empty. Deletion not possible.\n");
      return;
    }
 struct Node* toDelete = (*head)->prev;
    if (toDelete == *head) 
    {
        *head = NULL;
    } 
    else 
    {
        toDelete->prev->next = *head;
        (*head)->prev = toDelete->prev;
    }
    free(toDelete);
}

// Function to delete a node at a specific position in the circular doubly linked list
void deleteAtPosition(struct Node** head, int position) 
{
    if (*head == NULL) 
    {
      printf("List is empty. Deletion not possible.\n");
      return;
    }
    struct Node* current = *head;
    int count = 0;
    do {
        if (count == position) 
        {
            struct Node* prevNode = current->prev;
            struct Node* nextNode = current->next;
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            if (current == *head) 
            {
                *head = nextNode;
            }
             free(current);
            return;
        }
        current = current->next;
        count++;
    } while (current != *head);