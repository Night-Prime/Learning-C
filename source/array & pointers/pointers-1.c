/**
 * Working with pointers
 * A pointer variable is a variable that stores the address of that piece of data. 
*/

#include <stdio.h>

int main()
{
    int x = 4;
    char c;

    printf("The Location of X is stored at: %p\n", &x);
    printf("The Location of Variable 'c' : %p\n ", &c);

    return 0;
}