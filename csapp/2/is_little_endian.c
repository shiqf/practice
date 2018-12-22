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

    return 0;
}
