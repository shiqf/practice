void inplace_swap(int *x, int *y) {
    *y ^= *x;
    *x ^= *y;
    *y ^= *x;
}
