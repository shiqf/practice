int sra(int x, int k) {
    int xsra = (unsigned) x >> k;

    int w = 8 * sizeof(int);
    unsigned z = 1 << (w - k - 1);

    unsigned mask = z - 1;

    unsigned right = mask & xsra;
    /* 验证最高有效为0或1 */
    unsigned left = ~mask & (~xsra + z);

    return left | right;
}
