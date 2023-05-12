#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Delaing with a program that splits a file into multi-files
 * ps: introduced a safety check
 */

int main()
{
    char line[80];
    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen("ufos.csv", "w");
    FILE *file2 = fopen("disappearances.csv", "w");
    FILE *file3 = fopen("others.csv", "w");

    if (!(in = fopen("spooky.csv", "r")))
    {
        fprintf(stderr, "Can't open the file.\n");
        return 1;
    }

    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, "UFO"))
            fprintf(file1, "%s\n", line);

        else if (strstr(line, "Disappearance"))
            fprintf(file2, "%s\n", line);

        else
            fprintf(file3, "%s\n", line);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
}