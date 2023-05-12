#include <stdlib.h>

/**
 * Working with Singly-List data structures
 */

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// adding the Head Node
void add_node_front(Node **head, int data)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

// adding a node to the already existing list
void add_node(Node *head, int data)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        // build a struct for the current node
        Node *current_node = *head;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

// Deleting the first node
void remove_first_node(Node *head)
{
    if (*head != NULL)
    {
        Node *temp_node = *head;
        *head = (*head)->next;
        free(*temp_node);
    }
}

// Deleting the last node
void remove_last_node(Node *head)
{
    if (*head != NULL)
    {
        if ((*head)->next == NULL)
        {
            free(*head);
            *head = NULL;
        }
        else
        {
            Node *current_node = head;
            while (current_node->next->next != NULL)
            {
                current_node = current_node->next;
            }
        }
        free(current_node->next);
        current_node->next = NULL;
    }
}

// reversing the list
void reverse_list(Node *head)
{
    Node *prev_node = NULL;
    Node *current_node = *head;
    Node *next_node = NULL;

    while (current_node != NULL)
    {
        next_node = current_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }
    *head = prev_node;
}