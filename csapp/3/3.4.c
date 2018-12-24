
typedef long src_t;
typedef long dest_t;

/* typedef char src_t; */
/* typedef short dest_t; */
/* movsbw (%rdi),%ax */
/* mov    %ax,(%rsi) */

dest_t exchange(src_t *sp, dest_t *dp) {
    *dp = (dest_t) *sp;

    return *dp;
}
