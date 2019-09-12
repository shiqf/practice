#include "vec.h"

#define INDENT 0
#define OP +

void combine1(vec_ptr v, data_t *dest)
{
    long i;

    *dest = INDENT;
    for (i = 0; i < vec_length(v); ++i) {
        data_t val;
        get_vec_element(v, i, &val);
        *dest = *dest OP val;
    }
}
