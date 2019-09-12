```c

/* absdiff_se.c */
long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y)
{
    long result;
    if (x < y) {
        lt_cnt++;
        result = y - x;
    } else {
        ge_cnt++;
        result = x - y;
    }

    return result;;
}

/* arith2.c */
long arith2(long x, long y, long z) {
    long t1 = x ^ y;
    long t2 = t1 >> 3;
    long t3 = ~t2;
    long t4 = z - t3;

    return t4;
}

/* arith.c */
#define OP /

long arith(long x) {
    return x OP 8;
}

/* call_proc.c */
long call_proc()
{
    long x1 = 1;
    int x2= 2;
    short x3 = 3;
    char x4 = 4;
    proc(x1, &x1, x2, &x2, x3, &x3, x4, &x4);

    return (x1 + x2) * (x3 + x4);
}

/* comp.c */
/* #define COMP < */
/* typedef int data_t; */
/* /1* cmp    %esi,%edi *1/ */
/* /1* setl   %al *1/ */

/* #define COMP >= */
/* typedef short data_t; */
/* /1* cmp    %si,%di *1/ */
/* /1* setbe  %al *1/ */

/* #define COMP <= */
/* typedef unsigned char data_t; */
/* /1* cmp    %sil,%dil *1/ */
/* /1* setbe  %al *1/ */

#define COMP !=
typedef long data_t;
/* /1* cmp    %rsi,%rdi *1/ */
/* /1* setne  %al *1/ */

int comp(data_t a, data_t b) {
    return a COMP b;
}

/* exchange.c */
long exchange(long *xp, long y) {
    long x = *xp;
    *xp = y;

    return x;
}

/* fact_do.c */
long fact_do(long n) {
    long result = 1;

    do {
        result *= n;
        n--;
    } while (n > 1);

    return result;
}

/* fact_for.c */
long fact_for(long n) {
    long result = 1;

    do {
        result *= n;
        n--;
    } while (n > 1);

    return result;
}

/* fact_while.c */
long fact_while(long n) {
    long result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }

    return result;
}

/* fcvt.c */
double fcvt(int i, float *fp, double *dp, long *lp)
{
    float f = *fp;
    double d = *dp;
    long l = *lp;

    *lp = (long) d;
    *fp = (float) i;
    *dp = (double) l;

    return (double) f;
}

/* fix_prod_ele.c */
#define N 16
typedef int fix_matrix[N][N];

int fix_prod_ele(fix_matrix A, fix_matrix B, long i, long k) {
    long j;
    int result = 0;

    for (j = 0; j < N; j++) {
        result += A[i][j] * B[j][k];
    }

    return result;
}

/* float_mov.c */
float float_mov(float v1, float *src, float *dst) {
    float v2 = *src;
    *dst = v1;

    return v2;
}

/* for2while.c */
/* for (i = 0; i < 10; ++i) { */
/*     if (i & 1) */
/*         continue; */
/*     sum += i; */
/* } */

long for2while(void) {
    long sum = 0;
    long i = 0;

    while (i < 10) {
        if (i & 1)
            goto next;
        sum += i;
next:
        i++;
    }

    return sum;
}

/* fun_a.c */
long fun_a(unsigned long x) {
    long val = 0;
    while (x) {
        val ^= x;
        x >>= 1;
    }

    return val & 0x1;
}

/* fun_b.c */
long fun_b(unsigned long x) {
    long val = 0;
    long i;

    for (i = 64; i != 0; i--) {
        val = (val << 1) | (x & 0x1);
        x >>= 1;
    }

    return val;
}

/* fun.c */
struct ELE {
    long v;
    struct ELE *p;
};

long fun(struct ELE *ptr) {
    long sum = 0;
    while (ptr) {
        sum += ptr->v;
        ptr = ptr->p;
    }

    return sum;
}

/* gets.c */
#include <stdio.h>

char *gets_test(char *s)
{
    int c;
    char *dest = s;
    while ((c = getchar()) != '\n' && c != EOF) {
        *dest++ = c;
    }

    if (c == EOF && dest ==s)
        return NULL;
    *dest++ = '\0';

    return s;
}

void echo(void)
{
    char buf[8];
    gets_test(buf);
    puts(buf);
}

/* loop_while2.c */
long loop_while2(long a, long b)
{
    long result = b;
    while (b > 0) {
        result = a * b;
        b = b - a;
    }

    return result;
}

/* loop_while.c */
long loop_while(long a, long b)
{
    long result = 1;
    while (a < b) {
        result = result * (a + b);
        a = a + 1;
    }

    return result;
}

/* main.c */
#include <stdio.h>

void multstore(long, long, long *);

int main(void)
{
    long d;
    multstore(2, 3, &d);
    printf("2 * 3 --> %ld\n", d);
    
    long sum = 0;
    long i;
    for (i = 0; i < 10; ++i) {
        if (i & 1)
            continue;
        printf("i = %ld\n", i);
        sum += i;
    }
    
    printf("sum = %ld\n", sum);

    return 0;
}

long mult2(long a, long b) {
    long s = a * b;
    return s;
}

/* mstore.c */
long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}

/* P.c */
long Q(long a)
{
    return a;
}

long P(long x, long y)
{
    long u = Q(y);
    long v = Q(x);

    return u + v;
}

/* proc.c */
void proc(long a1, long *a1p,
        int a2, int *a2p,
        short a3, short *a3p,
        char a4, char *a4p) {
    *a1p += a1;
    *a2p += a2;
    *a3p += a3;
    *a4p += a4;
}

/* procprob.c */
unsigned procprob(int a, short b, long *u, char *v)
{
    *u += a;
    *v += b;

    return sizeof(a) + sizeof(b);
}

/* remdiv.c */
void remdiv(long x, long y,
        long *qp, long *rp) {
    long q = x/y;
    long r = x%y;
    *qp = q;
    *rp = r;
}

/* rfun.c */
long rfun(unsigned long x) {
    if (x == 0) {
        return 0;
    }
    unsigned long nx = x >> 2;
    long rv = rfun(nx);

    return x + rv;
}

/* scale2.c */
long scale2(long x, long y, long z) {
    long t = 5 * x + 2 * y + 8 * z;

    return t;
}

/* scale.c */
long scale(long x, long y, long z) {
    long t = x + 4 * y + 12 * z;

    return t;
}

/* shift_left4_rightn.c */
long shift_left4_rightn(long x, long n) {
    x <<= 4;
    x >>= n;

    return x;
}

/* sp_init.c */
struct prob {
    int *p;
    struct {
        int x;
        int y;
    } s;

    struct prob *next;
};

void sp_init(struct prob *sp) {
    sp->s.x = sp->s.y;
    sp->p = &sp->s.x;
    sp->next = sp;
}

/* sum_element.c */
#define M 5
#define N 7

/* T D[R][C] 数组可以写成 */
/* &D[i][j] = D + L(C * i + j) */

long P[M][N];
long Q[N][M];

long sum_element(long i, long j) {
    return P[i][j] + Q[j][i];
}

/* swap_add.c */
long swap_add(long *xp, long *yp)
{
    long x = *xp;
    long y = *yp;
    *xp = y;
    *yp = x;

    return x + y;
}

long caller(void)
{
    long arg1 = 634;
    long arg2 = 1057;
    long sum = swap_add(&arg1, &arg2);
    long diff = arg1 - arg2;

    return sum * diff;
}

/* switch_eg.c */
void switch_eg(long x, long n, long *dest) {
    long val = x;

    switch (n) {
        case 100:
            val *= 13;
            break;

        case 102:
            val += 10;
            /* break; */

        case 103:
            val += 11;
            break;

        case 104:
        case 106:
            val *= val;
            break;

        default:
            val = 0;
    }

    *dest = val;
}

/* switch_eg_impl.c */
void switch_eg_impl(long x, long n, long *dest) {

    static void *jt[7] = {
        &&loc_A, &&loc_def, &&loc_B,
        &&loc_C, &&loc_D, &&loc_def,
        &&loc_D
    };

    unsigned long index = n - 100;
    long val;

    if (index > 6)
        goto loc_def;
    goto *jt[index];
loc_A:
    val = x * 13;
    goto done;;
loc_B:
    x = x + 10;
    /* goto done;; */
loc_C:
    x = x + 11;
    goto done;;
loc_D:
    val = x * x;
    goto done;;
loc_def:
    val = 0;
done:
    *dest = val;
}

/* switcher.c */
void switcher(long a, long b, long c, long *dest) {
    long val = 0;

    switch (a) {
        case 5:
            c = 15 ^ b;

        case 0:
            val = c + 112;
            break;

        case 2:
        case 7:
            val = (b + c) << 2;
            break;

        case 4:
            val = a;
            break;

        default:
            val = b;
    }

    *dest = val;
}

/* test.c */
#define TEST >=
typedef long data_t;

/* #define TEST == */
/* typedef short data_t; */

/* #define TEST > */
/* typedef unsigned char data_t; */

/* #define TEST != */
/* typedef int data_t; */

int test(data_t a) {
    return a TEST 0;
}

/* uremdiv.c */
void uremdiv(unsigned long x, unsigned long y,
        unsigned long *qp, unsigned long *rp) {
    unsigned long q = x/y;
    unsigned long r = x%y;
    *qp = q;
    *rp = r;
}

/* var_prod_ele_opt.c */
int var_prod_ele_opt(long n, int A[n][n], int B[n][n], long i, long k) {
    int *Arow = A[i];
    int *Bptr = &B[0][k];
    int result = 0;
    long j;
    for (j = 0; j < n; ++j) {
        result += Arow[j] * *Bptr;
        Bptr += n;
    }

    return result;
}

/* vframe.c */
long vframe(long n, long idx, long *q)
{
    long i;
    long *p[n];
    p[0] = &i;
    for (i = 0; i < n; ++i) {
        p[i] = q;
    }

    return *p[idx];
}
```
