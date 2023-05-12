#include <stdlib.h>

/**
 * Doubly-Linked Lists
 */

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

// inserting a node at the beginning of the list
void insert_front_list(Node **head, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    new_node->prev = NULL;

    // if the head isn't empty, add the node before it, making the added node the new head
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }
    // but when empty, add the node in the beginning
    *head = new_node;
}

// inserting a node at the end of the list
void insert_end_list(Node *head, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    // if the location of the head is empty, add the new node to the HEAD location
    if (*head == NULL)
    {
        new_node->prev = NULL;
        // this means the added node is the only data on the list
        *head = new_node;
        return;
    }
    // set up a struct for the TAIL of the list
    struct Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    // this simply adds the node to the end.
    tail->next = new_node;
    new_node->prev = tail;
}

// deleting the node
void delete_node(Node *head, Node *node_to_delete)
{
    if (*head == NULL || node_to_delete = NULL)
    {
        return;
    }
    if (*head == node_to_delete)
    {
        *head = node_to_delete->next;
    }
    if (node_to_delete->next != NULL)
    {
        node_to_delete->next->prev = node_to_delete->prev;
    }
    if (node_to_delete->prev != NULL)
    {
        node_to_delete->prev->next = node_to_delete->next;
    }

    free(node_to_delete);
}

int main()
{
    Node *head = NULL;
    insert_node(&head, 1);
    insert_front_list(&head, 2);
    insert_end_list(&head, 3);
    print_list(head); // output: 3 2 1
    delete_node(&head, 2);
    print_list(head); // output: 3 1
    return 0;
}