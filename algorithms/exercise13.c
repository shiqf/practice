#include <stdio.h>
#include <ctype.h>

void insertion_sort(int* array, int length);
int find(int* array, size_t length, int findValue);

int main(void)
{
    int A[] = {31, 41, 59, 26, 41, 58};
    int length = sizeof(A)/sizeof(int);
    insertion_sort(A, length);

    for (int i = 0; i < length; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("%d\n", find(A, length, 31));
    
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

int find(int* array, size_t length, int findValue) {
    size_t left = 0;
    size_t right = length - 1;
    while (left <= right) {
        size_t mid = left + (right - left) / 2;
        if (array[mid] == findValue) return mid;
        if (array[mid] < findValue) {
            left = mid + 1;
        } else {
            right = mid -1;
        }
    }

    return -1;
}
