void decode1(long *xp, long *yp, long *zp) {
    long x, y, z;
    x = *xp;
    y = *yp;
    z = *zp;
    *xp = y;
    *yp = z;
    *zp = x;
}
