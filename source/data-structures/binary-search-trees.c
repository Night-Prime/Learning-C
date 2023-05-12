#include <stdio.h>
#include <stdlib.h>

/**
 * Binary Search Trees
 */

typedef struct TreeNode
{
    int key;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// creating a node
TreeNode *create_node(int key)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
}

// inserting a node
void insert_node(TreeNode **root, int key)
{
    if (*root == NULL)
    {
        *root = create_node(key);
        return;
    }
    if (key < (*root)->key)
    {
        insert_node(&((*root)->left), key);
    }
    else if (key > (*root)->key)
    {
        insert_node(&((*root)->right), key);
    }
}

// Traversing the Tree

void inorder_traversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    printf("%d ", root->key);
    inorder_traversal(root->right);
}

int main()
{
    TreeNode *root = NULL;
    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 70);
    insert(&root, 60);
    insert(&root, 80);
    inorder_traversal(root); // prints 20 30 40 50 60 70 80
    return 0;
}