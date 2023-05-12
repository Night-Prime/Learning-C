#include <stdio.h>
#include <stdlib.h>

/**
 * Working on an argument function 
 * that prints the index value of the arguments.
*/

int main (int argc, char* argv[])
{
    int i;
    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[] \n");
    
    for (i =0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}