/* for (i = 0; i < 10; ++i) { */
/*     if (i & 1) */
/*         continue; */
/*     sum += i; */
/* } */

long for2while(void) {
    long sum = 0;
    long i = 0;

    while (i < 10) {
        if (i & 1)
            goto next;
        sum += i;
next:
        i++;
    }

    return sum;
}
