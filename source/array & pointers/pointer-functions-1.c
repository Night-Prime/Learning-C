#include <stdio.h>
/**
 * Working with scanf()
 * There seems to be a bug here
*/

int main()
{
    int age;
    char firstname[40];
    char lastname[40];
    printf("Enter your Firstname: ");
    scanf("%39s", firstname);

    printf("Enter Lastname: ");
    scanf("%39s", lastname);

    printf("Enter Age: ");
    scanf("%i ", &age);

    printf("My name is %39s %39s and i am %i years old", firstname, lastname, age);

    return 0;
}