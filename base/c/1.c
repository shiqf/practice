#include <stdio.h>

void cel(void);

int main(void)
{

    // 1.2 节
    cel();

    // // 1.2 未知序列
    // printf("hello, \c world\n");

    // // 1.1
    // printf("hello, world\n");

    return 0;
}

void cel(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
}
