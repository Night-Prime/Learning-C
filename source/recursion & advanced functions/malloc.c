#include <stdio.h>
#include <stdlib.h>

int main() {
    int* my_array = malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (my_array == NULL) {
        printf("Error: memory allocation failed.\n");
        return 1; // Exit with an error code
    }
    
    // Use the allocated memory
    for (int i = 0; i < 10; i++) {
        my_array[i] = i * 10;
    }
    
    // Print the contents of the array
    printf("Array contents:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");
    
    free(my_array); // Free the allocated memory
    
    return 0; // Exit with success
}
