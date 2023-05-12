#include <stdio.h>

/**
 * Bubble Sort Algorithm
*/

int compare(int a, int b)
{
    if( a > b) return -1;
    else return 1;
}

void bubbleSort(int *A, int m, int (*compare)(int,int))
{
    int i, j, temp;
    // multi-loops
    for(i =0; i < m; i++){
        for(j= 0; j < m - 1; j++) {
            // run a condition on the multi-indexes
            if(compare(A[j] , A[j + 1]) > 0)
            {
                // swapping occurs here so indexes can bubble up/down
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i, a[] = {1,5,7,8,9,5};
    bubbleSort(a, 6, compare);
    for (i = 0; i < 9; i ++) printf("%d ", a[i]);
}