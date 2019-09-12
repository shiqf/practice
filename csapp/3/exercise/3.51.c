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
