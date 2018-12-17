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
    int m, n, i = 0;

    do {
        m = val % ary;
        n = val / ary;
        *(s + i) = m + '0';
        val = n;
        i++;
    } while (n);
    
    *(s + i) = '\0';

    int start = 0;
    int end = strlen(s) - 1;

    while (start < end) {
        *(s + start) ^= *(s + end);
        *(s + end) ^= *(s + start);
        *(s + start) ^= *(s + end);
        start++;
        end--;
    }

    printf("%s\n", s);
    

}
