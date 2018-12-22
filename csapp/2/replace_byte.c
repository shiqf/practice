unsigned replace_byte(unsigned x, int i, unsigned char b) {
    char *p = (char *)&x;
    *(p + i) ^= b;
    b ^= *(p + i);
    *(p + i) ^= b;

    return x;
}
