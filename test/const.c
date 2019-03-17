#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int NUM = 5;
    printf("%d\n", NUM);
    /* NUM = 8; */
    /* printf("%d\n", NUM); */

    /* printf函数返回打印字数gcc */
    printf("%d\n", printf("%s\n", "hell"));

    return 0;
}
