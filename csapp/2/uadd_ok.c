/* 2.27 */
int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;

    return sum >= x && sum >= y;
}
