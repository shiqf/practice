unsigned rotate_left(unsigned x, int n) {
    int w = 8 * sizeof(unsigned);
    unsigned left = x << n;
    unsigned right = x >> (w - n - 1) >> 1;

    return left | right;
}
