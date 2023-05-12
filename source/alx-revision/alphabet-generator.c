#include <stdio.h>

/**
 * main - prints all alphabets
 * return(0) - returns 0 if sucessful
*/

int main(void)
{
    char alp[26] = "abcdefghijklmnopqrstuvwx";
    int i;

    // run a loop
    for(i = 0; i < 26; i++)
    {
        putchar(alp[i]);
        putchar('\n');
    }
    return(0);
}