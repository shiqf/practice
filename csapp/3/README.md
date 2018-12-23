```c

/* 3.4.c */
typedef char src_t;
typedef short dest_t;

dest_t exchange(src_t *sp, dest_t *dp) {
    *dp = (dest_t) *sp;

    return *dp;
}

/* 3.5.c */
void decode1(long *xp, long *yp, long *zp) {
    long x, y, z;
    x = *xp;
    y = *yp;
    z = *zp;
    *xp = y;
    *yp = z;
    *zp = x;
}

/* arith2.c */
long arith2(long x, long y, long z) {
    long t1 = x ^ y;
    long t2 = t1 >> 3;
    long t3 = ~t2;
    long t4 = z - t3;

    return t4;
}

/* exchange.c */
long exchange(long *xp, long y) {
    long x = *xp;
    *xp = y;

    return x;
}

/* main.c */
#include <stdio.h>

void multstore(long, long, long *);

int main(void)
{
    long d;
    multstore(2, 3, &d);
    printf("2 * 3 --> %ld\n", d);

    return 0;
}

long mult2(long a, long b) {
    long s = a * b;
    return s;
}

/* mstore.c */
long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}

/* scale.c */
long scale(long x, long y, long z) {
    long t = x + 4 * y + 12 * z;

    return t;
}

/* scale2.c */
long scale2(long x, long y, long z) {
    long t = 5 * x + 2 * y + 8 * z;

    return t;
}

/* shift_left4_rightn.c */
long shift_left4_rightn(long x, long n) {
    x <<= 4;
    x >>= n;

    return x;
}
```
