```c

/* inplace_swap.c /*
void inplace_swap(int *x, int *y) {
    *y ^= *x;
    *x ^= *y;
    *y ^= *x;
}

/* main.c /*
#include <stdio.h>
#include <string.h>
#include "02.h"

char s[65];
int main(int argc, char *argv[])
{
    
    /* 2.13 */

    /* 2.12 */
    /* int x = 0x87654321; */
    /* printf("%08x\n", x & 0x000000ff); */
    /* printf("%08x\n", x ^ 0xffffff00); */
    /* printf("%08x\n", x | 0x000000ff); */

    /* 2.11 */
    /* const int len = 8; */
    /* int i; */
    /* int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 }; */
    /* printf("原先整型数组的值：\n"); */
    /* for (i = 0; i < len; ++i) { */
    /*     printf("%d ", a[i]); */
    /* } */
    /* printf("\n"); */
    /* reverse_array(a, len); */
    /* printf("置换后整型数组的值：\n"); */
    /* for (i = 0; i < len; ++i) { */
    /*     printf("%d ", a[i]); */
    /* } */
    /* printf("\n"); */
    
    /* 2.10 */
    /* int x = 8; */
    /* int y = 15; */
    /* printf("原先变量的值：%d %d\n", x, y); */
    /* inplace_swap(&x, &y); */
    /* printf("交换变量值后的结果：%d %d\n", x, y); */

    /* 2.7 */
    /* const char *r = "abcdef"; */
    /* show_bytes((byte_pointer) r, strlen(r)); */

    /* 2.6 */
    /* show_2int(0x00359141, s); */
    /* int length = printf("  "); */
    /* show_2float(0x00359141, s); */
    /* printf("偏移量 %d\n", length); */

    /* int a = 0x12345678; */
    /* test_show_bytes(a); */

    /* itoa(a, s, 2); */

    return 0;
}

/* reverse_array.c /*
#include "02.h"

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(a + first, a + last);
    }
}

/* show_bytes.c /*
#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void  show_bytes(byte_pointer start, size_t len) {
    size_t i;

    for (i = 0; i < len; i++) {
        printf(" %.2x\n", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

void itoa(int val, char *s, int ary) {
    printf("%d: ", val);
    int m, n, i = 0;

    do {
        m = val % ary;
        n = val / ary;
        *(s + i) = m + '0';
        val = n;
        i++;
    } while (n);
    
    *(s + i) = '\0';

    int begin = 0;
    int end = strlen(s) - 1;

    while (begin < end) {
        *(s + begin) ^= *(s + end);
        *(s + end) ^= *(s + begin);
        *(s + begin) ^= *(s + end);
        begin++;
        end--;
    }

    printf("%s\n", s);
}

void ito2(byte_pointer start, size_t len, char *s) {
    int i = 0;
    int j = 0;
    int ary = 2;
    int m, n;
    for (i = 0; i < len; ++i) {
        int val = *(start + i);
        for (j = 0; j < __CHAR_BIT__; ++j) {
            m = val / ary;
            n = val % ary;
            *(s + i * __CHAR_BIT__ + j) = n + '0';
            val = m;
        }
    }

    *(s + i * __CHAR_BIT__ + j) = '\0';

    int begin = 0;
    int end = strlen(s) - 1;

    while (begin < end) {
        *(s + begin) ^= *(s + end);
        *(s + end) ^= *(s + begin);
        *(s + begin) ^= *(s + end);
        begin++;
        end--;
    }

    printf("%s\n", s);
}

void show_2int(int x, char *s) {
    ito2((byte_pointer) &x, sizeof(int), s);
}

void show_2float(float x, char *s) {
    ito2((byte_pointer) &x, sizeof(float), s);
}

/* sum.c /*
int sum(int x, int y) {
    return x + y;
}
```
