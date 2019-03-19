#include <stdio.h>

void insertion_sort(int* array, int length);

int main(void)
{
    int A[] = {31, 41, 59, 26, 41, 58};
    int length = sizeof(A)/sizeof(int);
    insertion_sort(A, length);

    for (int i = 0; i < length; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}

void insertion_sort(int* array, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (array[i] > array[j]) {
                array[j] ^= array[i];
                array[i] ^= array[j];
                array[j] ^= array[i];
            }
        }
    }
}
