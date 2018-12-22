#include <limits.h>

int int_shifts_are_arithmetic(void) {
    return !((INT_MIN >> 31) + 1);
}
