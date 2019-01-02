int lower_one_mask(int n) {
    unsigned msb = 1 << (n - 1) << 1;

    return msb - 1;
}
