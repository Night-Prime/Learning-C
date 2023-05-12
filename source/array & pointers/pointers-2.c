/**
 * Building a simple navigation function using the idea of pointers
 * & - To store Address of the variable
 * * - reads the content present in the pointer variable
 */

#include <stdio.h>

void go_south_east(int * lat, int * lon)
{
    *lat = *lat + 1;
    *lon = *lon + 1;
}

int main()
{
    int latitude = 32;
    int longititude = -68;

    go_south_east(&latitude, &longititude);

    printf("Almost there, as we have found our coordinates: [%i, %i] \n", latitude, longititude);

}