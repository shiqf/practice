void switcher(long a, long b, long c, long *dest) {
    long val = 0;

    switch (a) {
        case 5:
            c = 15 ^ b;

        case 0:
            val = c + 112;
            break;

        case 2:
        case 7:
            val = (b + c) << 2;
            break;

        case 4:
            val = a;
            break;

        default:
            val = b;
    }

    *dest = val;
}
