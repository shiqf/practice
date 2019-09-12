```c

/* 3.16.c */
void cond(long a, long *p)
{
    if (!p)
        goto done;
    if (a <= *p)
        goto done;
    *p = a;
done:
    return;
}

/* 3.18.c */
long test(long x, long y, long z)
{
    long val = x + y + z;
    if (x < -3) {
        if (y < z) {
            val = x * y;
        } else {
            val = y * z;
        }
    } else if(x > 2) {
        val = x * z;
    }

    return val;
}

/* 3.20.c */
#define OP /

long arith(long x)
{
    return x OP 8;
}

/* 3.21.c */
long test(long x, long y)
{
    long val = x * 8;
    if (y > 0) {
        if (x < y) {
            val = y - x;
        } else {
            val = x&y;
        }
    } else if (y <= -2) {
        val = x + y;
    }

    return val;
}

/* 3.22.c */
long fact_do_goto(long n)
{
    long result = 1;
loop:
    result *= n;
    n = n - 1;
    if (n > 1)
        goto loop;
    return result;
}

/* 3.24.c */
long loop_while(long a, long b)
{
    long result = 1;
    while (a < b) {
        result = result * (a + b);
        a = a + 1;
    }

    return result;
}

/* 3.25.c */
long loop_while2(long a, long b)
{
    long result = b;

    while (b > 0) {
        result = result * a;
        b = b - a;
    }

    return result;
}

/* 3.26.c */
long fun_a(unsigned long x)
{
    long val = 0;
    while (x) {
        val = val ^ x;
        x >>= 1;
    }

    return val & 1;
}

/* 3.31.c */
void switcher(long a, long b, long c, long *dest)
{
    long val;

    switch (a) {
        case 5:
            c = b ^ 15;

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
            val = b;;
    }

    *dest = val;
}

/* 3.35.c */
long rfun(unsigned long x)
{
    if (!x) {
        return 0;
    }

    unsigned long nx = x >> 2;
    long rv = rfun(nx);

    return x + rv;
}

/* 3.36.c */
#include <stdio.h>

int main(void)
{
    short **U[6];

    return 0;
}

/* 3.37.c */
#define N 16
typedef int fix_matrix[N][N];

int fix_prod_ele(fix_matrix A, fix_matrix B, long i, long k)
{
    long j;
    int result = 0;

    for (j = 0; j < N; ++j) {
        result += A[i][j] * B[j][k];
    }

    return result;
}

/* 3.38.c */
#define M 5
#define N 7

long P[M][N];
long Q[N][M];

long sum_element(long i, long j)
{
    return P[i][j] + Q[j][i];
}

/* 3.42.c */
#include <stdio.h>

struct ELE {
    long v;
    struct ELE *p;
};

long fun(struct ELE *ptr)
{
    int result = 0;

    do {
        result += ptr->v;
        ptr = ptr->p;
    } while (ptr != NULL);

    return result;
}

/* 3.43.c */
typedef union {
    struct {
        long u;
        short v;
        char w;
    } t1;

    struct {
        int a[2];
        char *p;
    } t2;
} u_type;

void get(u_type *up, u_type *dest)
{
    dest->t1.v = up->t1.v;
}

/* 3.4.c */
typedef long src_t;
typedef long dest_t;
/* mov    (%rdi),%rax */
/* mov    %rax,(%rsi) */

/* typedef char src_t; */
/* typedef int dest_t; */
/* movsbw (%rdi),%ax */
/* mov    %ax,(%rsi) */

/* typedef char src_t; */
/* typedef unsigned dest_t; */
/* movsbl (%rdi),%eax */
/* mov    %eax,(%rsi) */

/* typedef unsigned char src_t; */
/* typedef long dest_t; */
/* movzbl (%rdi),%eax */
/* mov    %rax,(%rsi) */

/* typedef int src_t; */
/* typedef char dest_t; */
/* mov    (%rdi),%eax */
/* mov    %al,(%rsi) */

/* typedef unsigned src_t; */
/* typedef unsigned char dest_t; */
/* mov    (%rdi),%eax */
/* mov    %al,(%rsi) */

/* typedef char src_t; */
/* typedef short dest_t; */
/* movsbw (%rdi),%ax */
/* mov    %ax,(%rsi) */

dest_t exchange(src_t *sp, dest_t *dp) {
    *dp = (dest_t) *sp;

    return *dp;
}

/* 3.50.c */
double fcvt2(int *ip, float *fp, double *dp, long l)
{
    int i = *ip;
    float f = *fp;
    double d = *dp;

    *ip = (int) d;
    *fp = (float) i;
    *dp = (double) l;

    return (double) f;
}

/* 3.51.c */
#define src_t float
#define dest_t float

dest_t cvt(src_t x)
{
    dest_t y = (dest_t) x;

    return y;
}

/* vctsd2si %xmm0 %eax */
/* vmovaps %xmm0 %xmm1 vctsd2ss %xmm1 %xmm0 */
/* vctsi2ssq %rdi %xmm0 */
/* vctss2siq %xmm0 %rax */

/* 3.53.c */
#define arg1_t int
#define arg2_t long
#define arg3_t float
#define arg4_t double

double funct1(arg1_t p, arg2_t q, arg3_t r, arg4_t s)
{
    return p/(q+r) - s;
}

/* 3.54.c */
double funct2(double w, int x, float y, long z)
{
    return x * y - w /  z;
}

/* 3.57.c */
double funct3(int *ap, double b, long c, float *dp)
{
    
}

/* 3.58.c */
long decode2(long x, long y, long z)
{
    y -= z;
    x *= y; 

    long ret = x;

    ret = x << 63 >> 63;

    return x ^ ret;
}

/* 3.5.c */
void decode1(long *xp, long *yp, long *zp) {
    long x, y, z;
    x = *xp;
    y = *yp;
    z = *zp;
    *xp = y;
    *yp = z;
    *zp = x;
}

/* 3.68.c */
#define A 9
#define B 5
typedef struct {
    int x[A][B];
    long y;
} str1;

typedef struct {
    char array[B];
    int t;
    short s[A];
    long u;
} str2;

void setVal(str1 *p, str2 *q)
{
    long v1 = q->t;
    long v2 = q->u;
    p->y = v1 + v2;
}

/* 3.72.c */
#include <alloca.h>

long aframe(long n, long idx, long *q)
{
    long i;
    long **p = alloca(n * sizeof(long *));

    p[0] = &i;
    for (i = 0; i < n; ++i)
        p[i] = q;

    return *p[idx];
}

/* fix_set_diag_opt.c */
#include <stdio.h>

#define N 16
typedef int fix_matrix[N][N];
int A[N][N];

void  fix_set_diay_opt(fix_matrix A, int val) {
    int *Aptr = &A[0][0];
    int *Bend = &A[N][N];

    do {
        *Aptr = val;
        Aptr += N + 1;
    } while (Aptr != Bend);

    int i, j;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    fix_set_diay_opt(A, 3);

    return 0;
}

/* get_line.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_line()
{
    char buf[4];
    char *result;
    gets(buf);
    result = malloc(strlen(buf));
    strcpy(result, buf);

    return result;
}

int main(void)
{
    printf("%s\n", get_line());

    return 0;
}

/* gets.c */
/* #include <string.h> */

void echo()
{
    char buf[8];
    gets(buf);
    puts(buf);
}

/* test2.c */
long test(long x, long y, long z) {
    long val = x + y + z;
    
    if (x < -3) {
        if (y > x) {
            val = x * y;
        } else {
            val = y * z;
        }
    } else if(x > 2) {
        val = z * x;
    }

    return val;
}

/* test3.c */
long test(long x, long y) {
    long val = 8 * x;
    if (y > 0) {
        if (x < y)
            val = y - x;
        else
            val = x & y;
    } else if (y <= -2) {
        val = x + y;
    }

    return val;
}

/* var_prod_ele_opt.c */
int var_prod_ele_opt(long n, int A[n][n], int B[n][n], long i, long k)
{
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
```
