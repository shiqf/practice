int removeDuplicates(int* nums, int numsSize) {
    int len = numsSize; 
    for (int i = 0; i < len - 1; ++i) {
        for (int k = len - 1 - i; k >= 1; k--) {
            if (*(nums + k - 1) == *(nums + k)) {
                for (int j = k - 1; j < len - 1; j++) {
                    *(nums + j) = *(nums + j + 1);
                }
                len--;
            }
        }
    }

    return len;
}
