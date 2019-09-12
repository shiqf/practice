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
