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
    for (int i = 1; i < length; ++i) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
