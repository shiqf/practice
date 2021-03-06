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

    /* /1* 2.75 *1/ */
    /* unsigned x = 0x80000000; */
    /* unsigned y = 0x80000000; */
    /* printf("%x\n", unsigned_high_prod(x, y)); */

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

    /* 2.1 */
    int a = 0x12345678;
    test_show_bytes(a);
    itoa(a, s, 2);

    return 0;
}
