/*DOUBLY LINKED LIST*/
// Function to insert a node at the beginning of a doubly linked list.
struct Node* insertAtBeginning(struct Node* head, int newData) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) 
    {
        printf("Memory allocation failed\n");
        return head;
    }
    newNode->data = newData;
    newNode->prev = NULL; 
    newNode->next = head; 
    if (head != NULL) 
    {
        head->prev = newNode;
    }
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else 
    {
        struct Node* current = *head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function to insert a node at the end of the doubly linked list
void insertEnd(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else 
    {
        struct Node* current = *head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function to insert a node at a specific position in the doubly linked list
void insertAtPosition(struct Node** head, int data, int position) 
{
    if (position < 0) 
    {
      printf("Invalid position. Insertion not possible.\n");
      return;
    }
    struct Node* newNode = createNode(data);
    if (position == 0) 
    {
        if (*head != NULL) 
        {
            newNode->next = *head;
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    int count = 0;
    while (count < position - 1 && current != NULL) 
    {
        current = current->next;
        count++;
    }
    if (current == NULL) 
    {
      printf("Position is out of range. Insertion not possible.\n");
      return;
    }
    newNode->next = current->next;
    newNode->prev = current;
    current->next = newNode;
    if (newNode->next != NULL) 
    {
        newNode->next->prev = newNode;
    }
}

-----------------------------------------------------------------

/*CIRCULAR DOUBLY LINKED LIST*/
// Function to insert a node at the beginning of the circular doubly linked list

void insertAtBeginning(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else 
    {
        newNode->next = *head;
        newNode->prev = (*head)->prev;
        (*head)->prev->next = newNode;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a node at the end of the circular doubly linked list
void insertAtEnd(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else 
    {
        newNode->next = *head;
        newNode->prev = (*head)->prev;
        (*head)->prev->next = newNode;
        (*head)->prev = newNode;
    }
}

// Function to insert a node after a specific node with a given value
void insertAfterValue(struct Node** head, int value, int data) 
{
    if (*head == NULL) 
    {
       printf("List is empty. Cannot insert after value.\n");
        return;
    }
 
    struct Node* current = *head;
    do 
    {
        if (current->data == value) 
        {
            struct Node* newNode = createNode(data);
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
            return;
        }
        current = current->next;
    }while (current != *head);
}