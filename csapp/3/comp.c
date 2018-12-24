/* #define COMP < */
/* typedef int data_t; */
/* cmp    %esi,%edi */
/* setl   %al */

#define COMP <=
typedef unsigned short data_t;

int comp(data_t a, data_t b) {
    return a COMP b;
}
