#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct Node
{
    char *key;
    int value;
    struct Node *next;
} Node;

Node *hash_table[TABLE_SIZE];

// function to generate hash code for a given key
unsigned int hash_code(const char *key)
{
    unsigned int hash = 0;
    for (int i = 0; i < strlen(key); i++)
    {
        hash = hash * 31 + key[i];
    }
    return hash % TABLE_SIZE;
}

// function to insert a key-value pair into the hash table
void insert(const char *key, int value)
{
    // generate the hash code for the key
    unsigned int hash = hash_code(key);

    // create a new node for the key-value pair
    Node *new_node = malloc(sizeof(Node));
    new_node->key = malloc(strlen(key) + 1);
    strcpy(new_node->key, key);
    new_node->value = value;
    new_node->next = NULL;

    // insert the new node at the head of the linked list
    if (hash_table[hash] == NULL)
    {
        hash_table[hash] = new_node;
    }
    else
    {
        new_node->next = hash_table[hash];
        hash_table[hash] = new_node;
    }
}

// function to retrieve the value associated with a key from the hash table
int lookup(const char *key)
{
    // generate the hash code for the key
    unsigned int hash = hash_code(key);

    // search for the key in the linked list
    Node *node = hash_table[hash];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            return node->value;
        }
        node = node->next;
    }

    // key not found
    return -1;
}

int main()
{
    // insert some key-value pairs into the hash table
    insert("apple", 10);
    insert("banana", 20);
    insert("cherry", 30);

    // retrieve the value associated with a key from the hash table
    printf("apple: %d\n", lookup("apple"));
    printf("banana: %d\n", lookup("banana"));
    printf("cherry: %d\n", lookup("cherry"));

    return 0;
}
