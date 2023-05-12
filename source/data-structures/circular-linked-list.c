#include <stdlib.h>
#include <stdio.h>
/**
 * Working with Circular linked list
 */

typedef struct Node
{
    int data;
    struct Node *next;
}

// creating the first node
Node *
create_node(int data)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->next = data;
    new_node->data = NULL;
    return new_node;
}

// insert node
void insert_node(Node **head, int data)
{
    Node *new_node = create_node(data);
    if (*head == NULL)
    {
        new_node->next = new_node;
        *head = new_node;
        return;
    }

    Node *tail = *head;
    while (tail->next != *head)
    {
        tail = tail->next;
    }
    new_node->next = *head;
    tail->next = new_node;
    *head = new_node;
}

// deleting a node
void delete_node(Node **head, int data)
{
    if (*head == NULL)
    {
        return;
    }

    Node *prev_node = *head, *curr_node = (*head)->next;
    if ((*head)->data == data)
    {
        Node *tail = *head;
        while (tail->next != *head)
        {
            tail = tail->next;
        }
        tail->next = (*head)->next;
        *head = (*head)->next;
        free(prev_node);
        return;
    }

    while (cur_node != *head)
    {
        if (cur_node->data == data)
        {
            prev_node->next = cur_node->next;
            free(cur_node);
            return;
        }
        prev_node = cur_node;
        cur_node = cur_node->next;
    }

    void print_list(Node * head)
    {
        if (head == NULL)
        {
            printf("List is empty\n");
            return;
        }
        Node *cur_node = head;
        do
        {
            printf("%d ", cur_node->data);
            cur_node = cur_node->next;
        } while (cur_node != head);
        printf("\n");
    }

    int main()
    {
        Node *head = NULL;
        insert_node(&head, 1);
        insert_node(&head, 2);
        insert_node(&head, 3);
        print_list(head); // output: 3 2 1
        delete_node(&head, 2);
        print_list(head); // output: 3 1
        return 0;
    }
}
