/* #define COMP < */
/* typedef int data_t; */
/* cmp    %esi,%edi */
/* setl   %al */

/* #define COMP <= */
/* typedef unsigned short data_t; */
/* cmp    %si,%di */
/* setbe  %al */

/* #define COMP <= */
/* typedef unsigned char data_t; */
/* cmp    %sil,%dil */
/* setbe  %al */

#define COMP !=
typedef long data_t;
/* cmp    %rsi,%rdi */
/* setne  %al */

int comp(data_t a, data_t b) {
    return a COMP b;
}
