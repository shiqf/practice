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
