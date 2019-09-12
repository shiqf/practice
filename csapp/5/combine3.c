#include "vec.h"

#define INDENT 0
#define OP +

void combine3(vec_ptr v, data_t *dest)
{
    long i;

    long length = vec_length(v);
    data_t *data = get_vec_start(v);

    *dest = INDENT;
    for (i = 0; i < length; ++i) {
        *dest = *dest OP data[i];
    }
}
