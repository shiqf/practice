void cond(long a, long *p)
{
    if (!p)
        goto done;
    if (a <= *p)
        goto done;
    *p = a;
done:
    return;
}
