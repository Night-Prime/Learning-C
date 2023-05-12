#include <stdio.h>

/**
 * Binary Trees - has two child nodes
 */

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// creating a node:
Node *new_node(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
}

// inserting a node:
Node *insert(Node *node, int data)
{
    if (node == NULL)
    {
        return newNode(data);
    }
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    return node;
}

// traversing the tree in preOrder manner
void preOrder(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

// traversing in Order manner
void inOrder(Node *node)
{
    if (node == NULL)
        return;

    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
}

// traversing in postOrder manner

void postOrder(Node *node)
{
    if (node == NULL)
        return;

    postOrder(node->left);
    postOrder(node->right);
    printf("%d ", node->data);
}
