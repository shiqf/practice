```c

/* 02.h */
#ifndef __01_H__
#define __01_H__
#include <stdio.h>

typedef unsigned char *byte_pointer;

extern void show_int(int x);
extern void show_float(float x);
extern void  show_bytes(byte_pointer start, size_t len);

extern void test_show_bytes(int val);

extern void show_2int(int x, char *s);
extern void show_2float(float x, char *s);
extern void ito2(byte_pointer start, size_t len, char *s);

extern void itoa(int val, char *s, int ary);

/* 置换两个变量的值，需要注意 x 和 y 的值不能相同(地址)。 a = a ^a => a = 0; */
void inplace_swap(int *x, int *y);

/* 置换数组值 */
void reverse_array(int a[], int cnt);

#endif /* ifndef __01_H__ */

/* inplace_swap.c */
void inplace_swap(int *x, int *y) {
    *y ^= *x;
    *x ^= *y;
    *y ^= *x;
}

/* main.c */
#include <stdio.h>
#include <string.h>

/* 定义 INT_MAX、INT_MIN、UINT_MAX */
/* INT_MIN 的值没有与之对应的正值 */
#include <limits.h>

/* 定义int类型大小的头文件 */
/* 提供形如intN_t、uintN_t、INTN_MIN、INTN_MAX、UINTN_MAX */
#include <stdint.h>

/* 提供宏 PRId32 */
#include <inttypes.h>

/* 自定义函数声明头文件 */
#include "02.h"

char s[65];
int main(int argc, char *argv[])
{
    printf("%d\n", INT_MIN);

    /* /1* 补码表示 *1/ */
    /* short x = 12345; */
    /* short mx = -x; */
    /* show_bytes((byte_pointer) &x, sizeof(short)); */
    /* show_bytes((byte_pointer) &mx, sizeof(short)); */
    
    /* /1* 类型大小 *1/ */
    /* int32_t x = 0x12345678; */
    /* int64_t y = 0x1234567887654321; */
    /* printf("x = %" PRId32 ", y = %" PRIu64 "\n", x, y); */

    /* /1* 2.12 *1/ */
    /* int x = 0x87654321; */
    /* printf("%08x\n", x & 0x000000ff); */
    /* printf("%08x\n", x ^ 0xffffff00); */
    /* printf("%08x\n", x | 0x000000ff); */

    /* /1* 2.11 *1/ */
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
    
    /* /1* 2.10 *1/ */
    /* int x = 8; */
    /* int y = 15; */
    /* printf("原先变量的值：%d %d\n", x, y); */
    /* inplace_swap(&x, &y); */
    /* printf("交换变量值后的结果：%d %d\n", x, y); */

    /* /1* 2.7 *1/ */
    /* const char *r = "abcdef"; */
    /* show_bytes((byte_pointer) r, strlen(r)); */

    /* /1* 2.6 *1/ */
    /* show_2int(0x00359141, s); */
    /* int length = printf("  "); */
    /* show_2float(0x00359141, s); */
    /* printf("偏移量 %d\n", length); */

    /* /1* 2.1 *1/ */
    /* int a = 0x12345678; */
    /* test_show_bytes(a); */
    /* itoa(a, s, 2); */

    return 0;
}

/* reverse_array.c */
#include "02.h"

void reverse_array(int a[], int cnt) {
    /*
     * 置换两个变量的值，需要注意 first 和 last 的值不能相同(地址)。
     * a = a ^a => a = 0;
     */
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(a + first, a + last);
    }
}

/* show_bytes.c */
#include <stdio.h>
#include <string.h>

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

/* 整型数据在内存中按照字节序列值显示 */
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

/* 浮点数据在内存中按照字节序列值显示 */
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
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
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
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

/* sum.c */
int sum(int x, int y) {
    return x + y;
}
```
