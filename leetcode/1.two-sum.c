/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int* array;
    int i;
    int j;
    for (j = 0; j < numsSize - 1; j++) {
        for (i = j + 1; i < numsSize; i++) {
            if (*(nums + j) + *(nums + i) == target) {
                array = (int *)malloc(2 * sizeof(int));
                array[0] = j;
                array[1] = i;
                return array;
            }
        }
    }

    return NULL;
}
