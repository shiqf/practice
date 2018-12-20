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
