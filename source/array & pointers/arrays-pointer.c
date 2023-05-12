#include <stdio.h>
#include <string.h>
/**
 * Working with String arrays by building a jukebox.
 * stchr() - Finding the location of a character inside a string.
 * strcmp() - Compare two string.
 * strstr() - Finding the location of a string inside another string.
 * strcpy() - Copy one string to another.
 * strlen() - Find the length of the string.
 * strcat() - concatenating two strings.
 */

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
        {
            printf("Tracks %i: '\s'\n", i, tracks[i]);
        }
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
    return 0;

    return 0;
}