#include <stdio.h>
/**
 * Dereferencing are quite complicated tho'
 */

int main(void)
{
    int n;
    int *p;

    n = 98;
    p = &n;
    printf("The Value of n is: %d\n ", n);
    printf("Address of n is : %p\n", &n);
    printf("The value of p is: %p\n", &p);

   // Dereferencing occurs here
    *p = 428;
    printf("The value of n is: %d\n", n);
    return 0;
}