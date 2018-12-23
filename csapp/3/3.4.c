typedef char src_t;
typedef short dest_t;

dest_t exchange(src_t *sp, dest_t *dp) {
    *dp = (dest_t) *sp;

    return *dp;
}
