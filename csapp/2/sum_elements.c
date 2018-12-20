/* 2.25 */
float sum_elements(float a[], unsigned length) {
    unsigned i;
    float result = 0;
    if (0 == length)
        return result;

    for (i = 0; i <= length - 1; i++) {
        result += a[i];
    }

    return result;
}
