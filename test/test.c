#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int i = 1;
    while (1) {
        printf("%d\n", i);
        sleep(1);
        i = i * 2;
    }

    return 0;
}
