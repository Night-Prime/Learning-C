#include <stdio.h>
/**
 * Working with Function Pointers
 * 
 * main - using them in the context of a use case
 * @a: parameters used
 * @b: parameters used
 * add() - addition of parameters
 * subtract() - subtraction of parameters
 * multiply() - multiplication of parameters
 * printValues() - display of parameters
*/

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}
void printValues(int a, int b)
{
    printf("Values involved are %d and %d\n", a, b);
}

int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply, printValues};
    unsigned int ch, a = 20, b = 8;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
           "for multiply and 3 for printing Values\n");
    scanf("%d", &ch);

    if (ch > 3)
        return 0;

    (*fun_ptr_arr[ch])(a, b);

    return 0;
}