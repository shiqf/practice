#include <inttypes.h>
#include <stdio.h>
#include <assert.h>

unsigned unsigned_high_prod(unsigned x, unsigned y) {
    uint64_t high = (uint64_t)x * y;

    return high >> 32;
}
