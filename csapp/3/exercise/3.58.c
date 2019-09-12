long decode2(long x, long y, long z)
{
    y -= z;
    x *= y; 

    long ret = x;

    ret = x << 63 >> 63;

    return x ^ ret;
}
