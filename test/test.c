#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int i = 1;
    while (1) {
        printf("%08x %16d\n", i, i);
        sleep(1);
        i = i * 2;
    }

    return 0;
}
