#include <stdio.h>
/**
 * Working with Pipes (|) - they connect two programs
 * they connect the standard output of one program
 * to the Standard input of the other program
 * *****************************************************
 * Terminal: (./bermuda | ./geo2json) < spooky.csv > output.json
*/

int main()
{
    float latitude;
    float longitude;
    char info[80];

    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
    if ((latitude > 26.0) && (latitude < 34.0))
    if((longitude > -64.0) && (longitude <-76.0))
    printf("%f, %f, %s\n", latitude, latitude, info);

    return 0;
}