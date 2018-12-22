#include <stdio.h>

#define COLUMN 8
#define ROW 6

int main(void)
{
    /* i 为图像的行，j 为图形的列，以函数的思想写出符合图形的规则。 */
    /*     下面是由两条直线拼接而成 */
    int i, j;

    for (i = 0; i < ROW; ++i) { 
        for (j = 0; j < COLUMN; ++j) {
            if (i - j == 3) {
                printf("*");
            } else if (j + i == 7) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
