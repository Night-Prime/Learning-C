#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check whether a value is +ve or -ve or 0
 * return(0) - sucess
*/

int main()
{
    int n;
    srand(time(0)); // seeds the randomn number generator with time.

    n = rand() - RAND_MAX /2;
    if(n == 0)
    {
        printf("%d is Zero integer", n);
    }
    else if(n % 2 == 0)
    {
        printf("%d is a Positive integer", n);
    }
    else {
        printf("%d is a Negative Integer");
    }

    return (0);
}