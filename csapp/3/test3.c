long test(long x, long y, long z) {
    long val = x + y + z;
    
    if (x < -3) {
        if (y > x) {
            val = x * y;
        } else {
            val = x * z;
        }
    } else if(x > 2) {
        val = z * y;
    }

    return val;
}
