long Q(long a)
{
    return a;
}

long P(long x, long y)
{
    long u = Q(y);
    long v = Q(x);

    return u + v;
}
