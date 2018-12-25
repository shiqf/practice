long test(long x, long y) {
    long val = 8 * x;
    if (y > 0) {
        if (x >= y) {
            val = y - x;
        } else {
            val = x + y;
        }
    } else if (x <= -2) {
        x += y;
    }

    return val;
}
