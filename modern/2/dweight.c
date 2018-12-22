/* 计算箱子重量 */

#include <stdio.h>

/* 宏名字只用大写字母来表示，可以在程序中直接明白所用变量是宏定义 */
#define INCHES_PER_POUND 166
/* 当宏使用运算表达式时必须用括号把表达式括起来 */
#define PECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void)
{
    int height, length, width, volume, weight;

    /* 当输入当时候不是一个数字时? */
    printf("Enter height of box\n");
    scanf("%d", &height);
    printf("Enter length of box\n");
    scanf("%d", &length);
    printf("Enter width of box\n");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %d%dx%d\n", length, width, height);
    printf("Volume (cublic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
