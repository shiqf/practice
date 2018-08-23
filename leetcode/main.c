#include <stdio.h>
#include "26.remove-duplicates-from-sorted-array.c"

int main(int argc, char *argv[])
{
    int nums[] = {1,1,2};
    int numSize = sizeof (nums) / sizeof (int);

    for (int i = 0; i < removeDuplicates(nums, numSize); ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
