#include <stdio.h>
#include "26.remove-duplicates-from-sorted-array.c"

int main(int argc, char *argv[])
{
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numSize = sizeof (nums) / sizeof (int);

    printf("%d\n", removeDuplicates(nums, numSize));
    for (int i = 0; i < 5; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
