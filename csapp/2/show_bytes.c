#include <stdio.h>
#include <string.h>
#include <limits.h>

/* 重命名字符指针 */
typedef unsigned char *byte_pointer;

/*
 * 显示数据内存中的真实值，方便验证主机是大端机、还是小端机
 * 小端：内存低位显示的值是数值的低位
 * 大端：内存低位显示的值是数值的高位
 */
void  show_bytes(byte_pointer start, size_t len) {
    size_t i;

    for (i = 0; i < len; i++) {
        printf(" %.2x\n", start[i]);
    }
    printf("\n");
}

/* 短整型数据在内存中按照字节序列值显示 */
void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
}

/* 整型数据在内存中按照字节序列值显示 */
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

/* 长整型数据在内存中按照字节序列值显示 */
void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
}

/* 浮点数据在内存中按照字节序列值显示 */
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

/* 双精度浮点数据在内存中按照字节序列值显示 */
void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double));
}

/* 指针数据在内存中按照字节序列值显示 */
void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

/*
 * 整型数据的内存中字节序列显示
 * 整型强制转换浮点数据的内存中字节序列显示
 * 整型数据的地址在内存中字节序列显示
 */
void test_show_bytes(int val) {
    short sval = val;
    int ival = val;
    long lval = val;
    float fval = (float) ival;
    double dval = (double) ival;
    int *pval = &ival;
    show_short(sval);
    show_int(ival);
    show_long(lval);
    show_float(fval);
    show_double(dval);
    show_pointer(pval);
}

/* 整型数据转换成 ary 进制数组 */
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

/* 数据转换成2进制数组 */
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
