#include <stdio.h>
int main()
{
    /* The array was clearly declared here*/
    int contestants[] = {1, 2, 3};

    /* The Pointer Variable also*/
    int *choice = contestants;
    
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("I'm going to pick contestant number %i\n", contestants[2]);
    return 0;
}