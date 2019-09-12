#include <stdio.h>

typedef long data_t;

long min(long x, long y)
{
    return x < y ? x : y;
}

long max(long x, long y)
{
    return x < y ? y : x;
}

void incr(long *xp, long v)
{
    *xp += v;
}

long square(long x)
{
    return x * x;
}

int main(void)
{
    data_t t = 0;
    long x = 10, y = 100;

    /* A */ 
    int count1 = 0;
    for (long i = min(x, y); i < max(x, y); incr(&i, 1)) {
        count1++;
        t += square(i);
    }
    printf("count1 = %d\n", count1);

    /* B */
    int count2 = 0;
    for (long i = max(x, y) - 1; i >= min(x, y); incr(&i, -1)) {
        count2++;
        t += square(i);
    }
    printf("count2 = %d\n", count2);


    /* C */
    int count3 = 0;
    long low = min(x, y);
    long high = max(x, y);

    for (long i = low; i < high; incr(&i, 1)) {
        count3++;
        t += square(i);
    }
    printf("count3 = %d\n", count3);

    return 0;
}
