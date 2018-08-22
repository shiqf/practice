#include <stdio.h>
#include "prime.c"

int main(void)
{
    int m;
    printf("please enter the num value: ");
    scanf("%d", &m);
    printf("this num is %d\n", m);
    if (prime(m)) {
        printf("this is prime");
    } else {
        printf("this is not prime");
    }

    return 0;
}

