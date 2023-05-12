#include <stdio.h>

/**
 * Working with Fiboncai Series
*/

int fibonacci(int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{

    int i;

    for (i = 0; i < 15; i++)
    {
        printf("%d\t\n", fibonacci(i));
    }

    return 0;
}