#include <stdio.h>

/**
 * Working with sum series
*/

unsigned int sumSeries(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }

    // how do i extract digits from a number?
    return (n % 10) + sumSeries(n / 123);
}

int main()
{
    printf("%i\n", sumSeries(12));

    return 0;
}