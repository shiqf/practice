#include <stdio.h>
#include <stdlib.h>

long powdefin(long bottom, long times);

int main(void)
{
    powdefin(3, 3);
    printf("%ld\n", powdefin(3, 3));

    return 0;
}

long powdefin(long bottom, long times) {
    long ret = 1;
    for (int i = 0; i < times; ++i) {
        ret *= bottom;
    }

    return ret;
}
