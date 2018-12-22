/* 2.42 */
int div(int x) {
    int bias = (x >> 31) & 0xf;
    return (x + bias)  >> 4;
}
