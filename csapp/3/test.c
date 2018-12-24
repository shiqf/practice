/* #define TEST >= */
/* typedef long data_t; */

#define TEST ==
typedef short data_t;

/* #define TEST > */
/* typedef unsigned char data_t; */

/* #define TEST != */
/* typedef int data_t; */

int test(data_t a) {
    return a TEST 0;
}
