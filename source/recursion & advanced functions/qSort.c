#include <stdio.h>
 
/**
 * Q-Sort function.
 * This can be used in sorting array in desscending order.
 * 
*/

int compare(const void *a, const void *b)
{
    // some type casting occured here
    return( * (int*) a - * (int*) b);
}

int main() 
{
    int numbers[] = {12, 7, 9, 56, 7};

    // we divide through the elements with the first index
    int n = sizeof(numbers)/sizeof(numbers[0]), i;

    // implement the qsort here
    qsort (numbers, n, sizeof(int), compare);

    // run a loop
    for(i = 0; i < n; i++)
    {
        printf(" %d ", numbers[i]);
    }

    return(0);
}