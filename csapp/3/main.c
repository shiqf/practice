#include <stdio.h>

void multstore(long, long, long *);

int main(void)
{
    long d;
    multstore(2, 3, &d);
    printf("2 * 3 --> %ld\n", d);
    
    long sum = 0;
    long i;
    for (i = 0; i < 10; ++i) {
        if (i & 1)
            continue;
        printf("i = %ld\n", i);
        sum += i;
    }
    
    printf("sum = %ld\n", sum);

    return 0;
}

long mult2(long a, long b) {
    long s = a * b;
    return s;
}
