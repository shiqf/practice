#include <stdio.h>

struct ELE {
    long v;
    struct ELE *p;
};

long fun(struct ELE *ptr)
{
    int result = 0;

    do {
        result += ptr->v;
        ptr = ptr->p;
    } while (ptr != NULL);

    return result;
}
