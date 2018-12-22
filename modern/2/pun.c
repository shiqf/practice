/*******************************************************************************
 *                              Name: pun.c
 *                              Purpose: Prints a bad pun
 *                              Author: shiqf*
 *******************************************************************************/


/* 包含了出演标准输入/与输出库的相关信息 */
/* 指令 */
#include <stdio.h>

/*
 * 函数分为两类：库函数和程序员自己编写的函数
 * main 函数是非常特殊的，不能写成其他名称例如：begin start or MAIN
 * main 函数回在程序终止时向操作系统返回一个状态码
 */

int main(void)
{
    /* printf 函数有标准库stdio.h头文件指明，\n表示换行 */
    printf("To C, or not to C: that is the question.\n");

    /* return 有两个作用：使得main函数终止、指出main函数返回值是0 */
    return 0;
}
