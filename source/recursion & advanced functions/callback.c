#include <stdio.h>

/**
 * Working with Callback functions
 * through function pointers
*/

void call()
{
    printf("Hello I am here");
}

void back(void (*ptr)())
{
    ptr();
}

int main()
{
    back(call);
}