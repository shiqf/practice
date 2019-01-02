#include <limits.h>

int saturating_add(int x, int y) {
    if (x > 0 && y > 0 && x + y < x)
        return INT_MAX;

    if (x < 0 && y < 0 && x + y >= x)
        return INT_MIN;

    return x + y;
}
