/* 2.32 */
#include "02.h"
#include <limits.h>

int tsub_ok(int x, int y) {
    if (INT_MIN == y) {
        return 0;
    }

    return tadd_ok(x, -y);
}
