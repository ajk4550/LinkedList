// LinkedList
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
  int data;
  struct Node *next;
};

// The function to print the linked list starting from the head
void printList(struct Node *n)
{
  while (n != NULL)
  {
    printf(" %d", n->data);
    n = n->next;
  }
  printf("\n");
}

/* Given a reference (pointer to pointer) to the head of a list and
   an int, inserts a new node on the fron t of the list. */
void push(struct Node** head_ref, int new_data)
{
  // 1. Allocate node
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  // 2. Put in the data
  new_node->data = new_data;
  // 3. Make next of new node as head
  new_node->next = (*head_ref);
  // 4. Move the head to point to the new node
  (*head_ref) = new_node;
}

/* Given a node prev_node, insert a new node after the given
   prev_node */
void insertAfter(struct Node* prev_node, int new_data)
{
  // 1. Check if the given prev_node is NULL
  if(prev_node == NULL)
  {
    printf("the given previous node cannot be NULL");
    return;
  }
  // 2. Allocate the new node
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  // 3. Put in the data
  new_node->data = new_data;
  // 4. Make next of new node as next of prev_node
  new_node->next = prev_node->next;
  // 5. Move the next of prev_node as new_node
  prev_node->next = new_node;
}

/* Given a reference (pointer to pointer) to the head
   of a list and an int, appends a new node at the end */
void append(struct Node** head_ref, int new_data)
{
  // 1. Allocate node
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  struct Node *last = *head_ref;
  // 2. Put in the data
  new_node->data = new_data;
  // 3. This is last node so make next NULL
  new_node->next = NULL;
  // 4. If Linked List is empty, make new node as head
  if(*head_ref == NULL)
  {
    *head_ref = new_node;
    return;
  }
  // 5. Else traverse till the last node
  while(last->next != NULL)
    last = last->next;
  // 6. Change the next of last node
  last->next = new_node;
  return;
}

// Program that creates a simple linked list
int main()
{
  // Starts with an empty list
  struct Node* head = NULL;
  append(&head, 6);
  push(&head, 7);
  push(&head, 1);
  append(&head, 4);
  insertAfter(head->next, 8);
  
  printList(head);

  return 0;
}
