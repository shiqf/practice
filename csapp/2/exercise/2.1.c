#include <stdio.h>
#include "../02.h"
#include "../show_bytes.c"

#define LEN 3

int main(void)
{

    unsigned char A[LEN] = { 0x39, 0xA7, 0xF8 };

    for (unsigned char i = 0; i < LEN; ++i) {
        printf("A[%X] = %X\n", i, A[i]);
    }

    /* char a[LEN * 4]; */
    /* printf("0x39A7F8 =\n"); */
    /* ito2(A, LEN, a); */

    return 0;
}
