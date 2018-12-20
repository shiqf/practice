#include "02.h"

void reverse_array(int a[], int cnt) {
    /*
     * 置换两个变量的值，需要注意 first 和 last 的值不能相同(地址)。
     * a = a ^a => a = 0;
     */
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(a + first, a + last);
    }
}
