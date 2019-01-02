int fits_bits(int x, int n) {
    return !((unsigned) x >> n);
}
