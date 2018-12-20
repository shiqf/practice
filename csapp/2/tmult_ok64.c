/* 2.36 */
#include <inttypes.h>

int64_t tmult_ok64(int x, int y) {
    /* 显示强制类型转换 */
    int64_t p = (int64_t)x * y;

    return p;
}
