#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 5

/**
 * Working with Queue - FIFO pattern
 */

int queue[MAX_SIZE];
int front = -1, rear = -1;

// function to check if queue is empty
int is_empty()
{
    if (front == -1 || front == rear + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full()
{
    if (rear == MAX_SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int data)
{
    if (is_full())
    {
        printf("The Queue is currently full!");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (is_empty())
    {
        printf("The Queue is currently empty!");
    }
    else
    {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = rear + 1;
        }
    }
}

void display()
{
    if (is_empty())
    {
        printf("Queue is empty. \n");
    }
    else
    {
        printf("Elements in the queue: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(60);
    enqueue(70);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}