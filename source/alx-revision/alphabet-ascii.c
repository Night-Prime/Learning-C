#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * main - prints all alphabet letter without q and e
 * using ascii
 * return: Always 0 if success
*/

int main(void)
{
    int i;
    for(i= 97; i < 123; i++ )
    {
        if( i != 101 && i != 113)
        {
            putchar(i);
        }
    }

    return (0);
}

