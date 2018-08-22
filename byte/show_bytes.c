#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++)
        printf(" %.2x", start[i]);
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

void test_show_bytes(int val)
{
    int ival = val;
    int fval = (float) ival;
    int *pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main()
{
    int val = 0;
    printf("please enter num of val litter than %d:\n", __INT_MAX__);
    scanf("%d", &val);
    show_bytes((byte_pointer) &val, sizeof(int));
    printf("this is the value of int float and pointer\n");
    test_show_bytes(val);

    return 0;
}
