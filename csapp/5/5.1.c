void swap(long *xp, long *yp)
{
    *xp = *xp + *yp;
    *yp = *xp - *yp;
    *xp = *xp - *yp;
}

/* 结果：两个变量最终结果为零 */

long f();

long func1() {
    return f() + f() + f() + f();
}

long func2() {
    return 4 * f();
}

long counter = 0;

long f() {
    return counter++;
}

/* func1 的优化版本 */
/* 内联过程优化(inline) */
long func1opt() {
    long t = 4 * counter + 6;
    counter += 4;
    return t;
}
