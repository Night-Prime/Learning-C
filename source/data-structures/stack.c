#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100

/**
 * Implementing Stack using Array - LIFO pattern
 */

typedef struct
{
    int data[MAX_SIZE];
    int top;
} Stack;

// function to create a Stack
Stack s = create_stack()
{
    Stack *s;
    s.top = -1;
    return s;
}

// function to check if the stack is empty
int is_empty(Stack *s)
{
    return s->top == -1;
}

// function to check if full
int is_full(Stack *s)
{
    return s->top == MAX_SIZE - 1;
}

// function to add an element
void push(Stack *s, int value)
{
    if (is_full(s))
    {
        printf("Stack is Currently Full!");
        return;
    }
    s->top++;
    s->data[s->top] = value;
}

// function to remove an element
int pop(Stack *s)
{
    if (is_empty(s))
    {
        printf("Stack is Currently Empty!");
        return -1;
    }
    int value = s->data[s->top];
    s->top--;
    return value;
}

// function to get top value

int top(Stack *s)
{
    if (is_empty(s))
    {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return s->data[s->top];
}

int main()
{
    Stack s = create_stack();
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("Top element: %d\n", top(&s));
    while (!is_empty(&s))
    {
        printf("%d\n", pop(&s));
    }
    return 0;
}