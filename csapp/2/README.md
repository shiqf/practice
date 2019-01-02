```c

/* 02.h */
#ifndef __01_H__
#define __01_H__
#include <stdio.h>
#include <inttypes.h>

typedef unsigned char *byte_pointer;

/* 2.56 */
extern void show_short(short x);
extern void show_int(int x);
extern void show_long(long x);
extern void show_float(float x);
extern void show_double(double x);
extern void  show_bytes(byte_pointer start, size_t len);

extern void test_show_bytes(int val);

extern void show_2int(int x, char *s);
extern void show_2float(float x, char *s);
extern void ito2(byte_pointer start, size_t len, char *s);

extern void itoa(int val, char *s, int ary);

/* 置换两个变量的值，需要注意 x 和 y 的值不能相同(地址)。 a = a ^a => a = 0; */
extern void inplace_swap(int *x, int *y);

/* 置换数组值 */
extern void reverse_array(int a[], int cnt);

extern float sum_elements(float a[], unsigned length);
extern int strlonger(char *s, char *t);

extern int uadd_ok(unsigned x, unsigned y);
extern int tadd_ok(int x, int y);
extern int tsub_ok(int x, int y);

extern int64_t tmult_ok64(int x, int y);
extern int div(int x);

/* 2.58 */
extern int is_little_endian(int val);

/* 2.60 */
extern unsigned replace_byte(unsigned x, int i, unsigned char b);

/* 2.62 */
extern int int_shifts_are_arithmetic(void);

/* 2.63 */
extern unsigned srl(unsigned x, int k);
extern int sra(int x, int k);

/* 2.64 */
extern int any_odd_one(unsigned x);

/* 2.65 */
extern int odd_ones(unsigned x);

/* 2.66 */
extern int leftmost_one(unsigned x);

/* 2.67 */
extern int int_size_is_32(void);
extern int int_size_is_16(void);

/* 2.68 */
extern int lower_one_mask(int n);

/* 2.69 */
extern unsigned rotate_left(unsigned x, int n);

/* 2.70 */
extern int fits_bits(int x, int n);

/* 2.71 */
typedef unsigned packed_t;
extern int xbyte(packed_t word, int bytenum);

/* 2.73 */
extern int saturating_add(int x, int y);

#endif /* ifndef __01_H__ */

/* any_odd_one.c */
int any_odd_one(unsigned x) {
    return !!(0x55555555 & x);
}

/* copy_int.c */
#include <string.h>

void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes >= (int)sizeof(val))
        memcpy(buf, (void *) &val, sizeof(val));
}

/* div16.c */
/* 2.42 */
int div(int x) {
    int bias = (x >> 31) & 0xf;
    return (x + bias)  >> 4;
}

/* fits_bits.c */
int fits_bits(int x, int n) {
    return !((unsigned) x >> n);
}

/* get_msb.c */
int get_msb(int x) {
    int shift_val = (sizeof(int) - 1) << 3;

    int xright = x >> shift_val;

    return xright & 0xff;
}

/* inplace_swap.c */
void inplace_swap(int *x, int *y) {
    *y ^= *x;
    *x ^= *y;
    *y ^= *x;
}

/* int_shifts_are_arithmetic.c */
int int_shifts_are_arithmetic(void) {
    int i = -1;

    return (i >> 1) == -1;
}

/* int_size_is_16.c */
int int_size_is_16(void) {
    int set_msb = 1 << 15 << 15 << 1;
    int beyond_msb = set_msb << 1;

    return set_msb && !beyond_msb;
}

/* int_size_is_32.c */
int int_size_is_32(void) {
    int set_msb = 1 << 31;
    int beyond_msb = set_msb << 1;

    return set_msb && !beyond_msb;
}

/* is_little_endian.c */
#include "02.h"

int is_little_endian(int val) {
    char *p = (char *) &val;
    int length = sizeof(int);
    int sum = 0;

    int i;
    for (i = 0; i < length; ++i) {
        sum += *(p + i) << (i * 8);
    }
    if (sum == val) {
        return 1;
    }

    sum = 0;
    for (i = 0; i < length; ++i) {
        sum <<= 8;
        sum += *(p + i);
    }
    if (sum == val) {
        return 0;
    }

    return -1;
}

/* leftmost_one.c */
int leftmost_one(unsigned x) {
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;

    return (x >> 1) + 1;
}

/* lower_one_mask.c */
int lower_one_mask(int n) {
    unsigned msb = 1 << (n - 1) << 1;

    return msb - 1;
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

    /* /1* 2.73 *1/ */
    /* int x = 0x80000001; */
    /* int y = 0xfffffff0; */
    /* printf("x: %x | %d, y: %x | %d----> x + y: %x\n", x, x, y, y, saturating_add(x, y)); */

    /* /1* 2.71 *1/ */
    /* if (-1 >= (int)sizeof(int)) { */
    /*     printf("hello world\n"); */
    /* } else { */
    /*     printf("ok\n"); */
    /* } */

    /* /1* 2.71 *1/ */
    /* printf("%x\n", xbyte(0x00700000, 2)); */

    /* /1* 2.70 *1/ */
    /* printf("%d\n", fits_bits(0xFFFFFF00, 9)); */

    /* /1* 2.69 *1/ */
    /* printf("%x %x\n", 0x12345678, rotate_left(0x12345678, 28)); */

    /* /1* 2.68 *1/ */
    /* printf("%d %x\n", 32, lower_one_mask(32)); */

    /* /1* 2.66 *1/ */
    /* printf("%x----->%x\n", 0xff00, leftmost_one(0xff00)); */

    /* /1* 2.65 *1/ */
    /* printf("%x %d\n", 0xfe, odd_ones(0xfe)); */
    /* printf("%x %d\n", 0xff, odd_ones(0xff)); */

    /* /1* 2.64 *1/ */
    /* printf("%x---->%d\n", 0xa, any_odd_one(0xa)); */
    /* printf("%x---->%d\n", 0x9, any_odd_one(0x9)); */
    /* printf("%x---->%d\n", 0xaaaaaaaa, any_odd_one(0xaaaaaaaa)); */

    /* /1* 2.63 *1/ */
    /* printf("%x---->%x\n", (unsigned)0xffffffff >> 3, srl(0xffffffff, 3)); */
    /* printf("%x---->%x\n", (unsigned)0x0000ffff >> 3, srl(0x0000ffff, 3)); */
    /* printf("%x---->%x\n", (int)0xffffffff >> 3, sra(0xffffffff, 3)); */
    /* printf("%x---->%x\n", (int)0x0000ffff >> 3, sra(0x0000ffff, 3)); */

    /* /1* 2.62 *1/ */
    /* printf("int_shifts_are_arithmetic = %d\n", int_shifts_are_arithmetic()); */

    /* /1* 2.61 *1/ */
    /* int x = 0x0fffffff; */
    /* printf("%d\n", !(x + 1)); */
    /* printf("%d\n", !x); */
    /* printf("%d\n", !((1 << 8) - x -1)); */
    /* printf("%d\n", !(x >> 24)); */

    /* /1* 2.60 *1/ */
    /* printf("replace_byte = %x\n", replace_byte(0x12345678, 2, 0xab)); */
    /* printf("replace_byte = %x\n", replace_byte(0x12345678, 0, 0xab)); */

    /* /1* 2.59 *1/ */
    /* int x = 0x89abcdef; */
    /* int y = 0x76543210; */
    /* printf("%x\n", (x & 0x000000ff) ^ (y & 0xffffff00)); */

    /* /1* 2.58 *1/ */
    /* printf("is_little_endian = %d\n", is_little_endian(0x12345678)); */

    /* 浮点数的二进制表示 */

    /* /1* 2.42 *1/ */
    /* int x = -128; */
    /* int k = 4; */
    /* printf("x = %x\n", (x < 0 ? x + (1<<k) -1 : x) >> k); */
    /* printf("div = %x\n", div(x)); */

    /* /1* 2.36 *1/ */
    /* int x = 0x7fffffff; */
    /* int y = 0x7fffffff; */
    /* printf("%d %d\n", x, y); */
    /* printf("%lld\n", tmult_ok64(x, y)); */
    
    /* /1* 2.32 *1/ */
    /* int x = 0x7fffffff; */
    /* int y = 0xffffffff; */
    /* printf("tsub_ok = %d\n", tsub_ok(x, y)); */

    /* /1* 2.30 *1/ */
    /* int x = 0x00000000; */
    /* int y = 0x00000000; */
    /* printf("tadd_ok = %d\n", tadd_ok(x, y)); */

    /* /1* 2.27 *1/ */
    /* unsigned x = INT_MAX; */
    /* unsigned y = INT_MAX - 1; */
    /* printf("%d\n", uadd_ok(x, y)); */

    /* 2.26 */
    /* char *s = "12343"; */
    /* char *t = "123435"; */
    /* printf("%d\n", strlonger(s, t)); */

    /* /1* 2.23 *1/ */
    /* /1* 逻辑位移及算数位移 *1/ */
    /* unsigned int word = 0xedcba987; */
    /* printf("word = %x\n", (int) ((word << 24) >> 24)); */
    /* printf("word = %x\n", ((int) word << 24) >> 24); */

    /* /1* 有符号整型最小值不对称 *1/ */
    /* int x = -1; */
    /* unsigned u = 2147483648; */
    /* printf("x = %u = %d\n", x, x); */
    /* printf("u = %u = %d\n", u, u); */
    /* /1* 如果是小位数负数转换成大位数无符号整型，先算数添加符号位 *1/ */
    /* short sx = -12345; */
    /* printf("sx = %hd\n", sx); */
    /* show_bytes((byte_pointer) &sx, sizeof(short)); */
    /* printf("sx = %u\n", sx); */
    /* show_bytes((byte_pointer) &sx, sizeof(unsigned)); */
    /* /1* 等价于 (unsigned) (int) sx; 先改变其大小，在改变符号 *1/ */
    /* unsigned uy = sx; */
    /* printf("uy = %u\n", uy); */
    /* show_bytes((byte_pointer) &uy, sizeof(unsigned)); */

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

/* odd_ones.c */
int odd_ones(unsigned x) {
    x ^= (x >> 1);
    x ^= (x >> 2);
    x ^= (x >> 4);
    x ^= (x >> 8);
    x ^= (x >> 16);

    return x & 1;
}

/* replace_byte.c */
unsigned replace_byte(unsigned x, int i, unsigned char b) {
    char *p = (char *)&x;
    *(p + i) ^= b;
    b ^= *(p + i);
    *(p + i) ^= b;

    return x;
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

/* rotate_left.c */
unsigned rotate_left(unsigned x, int n) {
    int w = 8 * sizeof(unsigned);
    unsigned left = x << n;
    unsigned right = x >> (w - n - 1) >> 1;

    return left | right;
}

/* saturating_add.c */
#include <limits.h>

int saturating_add(int x, int y) {
    if (x > 0 && y > 0 && x + y < x)
        return INT_MAX;

    if (x < 0 && y < 0 && x + y >= x)
        return INT_MIN;

    return x + y;
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

/* sra.c */
int sra(int x, int k) {
    int xsra = (unsigned) x >> k;

    int w = 8 * sizeof(int);
    unsigned z = 1 << (w - k - 1);

    unsigned mask = z - 1;

    unsigned right = mask & xsra;
    /* 验证最高有效为0或1 */
    unsigned left = ~mask & (~xsra + z);

    return left | right;
}

/* srl.c */
unsigned srl(unsigned x, int k) {
    unsigned xsra = (int) x >> k;

    int w = 8 * sizeof(int);
    /*
     * 该值是算数右移k位后在高位从左往右补全k个1
     * 位移量(括号中当值)只能在0 到 w - 1(该处为31)之间，且k的取值范围在0～31之间
     * 括号表达式中只能式 w -k - 1
     * 移动k位需要在高位补全k个1，所以需要把-2
     *
     */
    unsigned high_bit = 2 << (w - k - 1);

    return xsra & high_bit - 1;
}

/* strlonger.c */
/* 2.26 */
#include <string.h>

int strlonger(char *s, char *t) {
    return strlen(s) > strlen(t);
}

/* sum.c */
int sum(int x, int y) {
    return x + y;
}

/* sum_elements.c */
/* 2.25 */
float sum_elements(float a[], unsigned length) {
    unsigned i;
    float result = 0;
    if (0 == length)
        return result;

    for (i = 0; i <= length - 1; i++) {
        result += a[i];
    }

    return result;
}

/* tadd_ok.c */
/* 2.27 */
int tadd_ok(int x, int y) {
    int sum = x + y;

    return !((x > 0 && y > 0 && sum < 0) || (x <= 0 && y <= 0 && sum > 0));
}

/* tmult_ok.c */
/* 2.35 */

int tmult_ok(int x, int y) {
    int p = x * y;

    return !x || p / x == y;
}

/* tmult_ok64.c */
/* 2.36 */
#include <inttypes.h>

int64_t tmult_ok64(int x, int y) {
    /* 显示强制类型转换 */
    int64_t p = (int64_t)x * y;

    return p;
}

/* tsub_ok.c */
/* 2.32 */
#include "02.h"
#include <limits.h>

int tsub_ok(int x, int y) {
    if (INT_MIN == y) {
        return 0;
    }

    return tadd_ok(x, -y);
}

/* uadd_ok.c */
/* 2.27 */
int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;

    return sum >= x && sum >= y;
}

/* xbyte.c */
typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {
    int left_move = (sizeof(int) - bytenum - 1) << 3;

    return (int)(word << left_move) >> 24;
}
```
