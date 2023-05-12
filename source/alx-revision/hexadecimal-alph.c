#include <stdio.h>

/**
 * main - prints from 0-9 and a - f
 * hexadecimal format
 * return: Always return sucess if 0
*/

int main(void)
{
    int i;
    for(i = 48; i < 58; i++)
    {
        putchar(i);
    }

    for(i = 97; i < 103; i++)
    {
        putchar(i);
    }

    return(0);
}