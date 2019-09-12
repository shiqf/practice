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
extern void show_bytes(byte_pointer start, size_t len);

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

/* 2.75 */
extern int unsigned_high_prod(unsigned x, unsigned y);

#endif /* ifndef __01_H__ */
