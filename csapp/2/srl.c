unsigned srl(unsigned x, int k) {
    unsigned xsra = (int) x >> k;

    int w = 8 * sizeof(int);
    /*
     * 该值是算数右移k位后在高位从左往右补全k个1
     * 位移量(括号中当值)只能在0 到 w - 1(该处为31)之间，且k的取值范围在0～31之间
     * 括号表达式中只能式 w -k - 1
     * 移动k位需要在高位补全k个1，所以需要把-2
     *
     */
    unsigned high_bit = 2 << (w - k - 1);

    return xsra & high_bit - 1;
}
