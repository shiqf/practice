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
    printf("%x: ", x);
    ito2((byte_pointer) &x, sizeof(int), s);
}

void show_2float(float x, char *s) {
    printf("%f: ", x);
    ito2((byte_pointer) &x, sizeof(float), s);
}
