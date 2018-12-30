struct ELE {
    long v;
    struct ELE *p;
};

long fun(struct ELE *ptr) {
    long sum = 0;
    if (ptr->v) {
        sum += ptr->v;
        ptr = ptr->p;
    }

    return sum;
}
