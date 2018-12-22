#include "02.h"

int is_little_endian(int val) {
    char *p = (char *) &val;
    int length = sizeof(int);
    int sum = 0;

    int i;
    for (i = 0; i < length; ++i) {
        sum += *(p + i) << (i * 8);
    }
    if (sum == val) {
        return 1;
    }

    sum = 0;
    for (i = 0; i < length; ++i) {
        sum <<= 8;
        sum += *(p + i);
    }
    if (sum == val) {
        return 0;
    }

    return -1;
}
