# c 语言学习

基本概念
1. 变量
2. 常量
3. 算术运算
4. 控制流
5. 函数
6. 基本输入/输出

7. 指针、结构、运算符集合
8. 标准库

## 入门

```c
// main.c
#include <stdio.h> // 用于告诉输入/输出库的信息

int main(void)
{
    printf("hello world\n");

    return 0;
}
```

使用 make 编译源程序

```bash
make main // 寻找 main.c 并编译 main.c 为 main
./main    // 运行可执行文件
// or
cc main.c // 默认生成 a.out
./a.out    // 运行可执行文件
```

c 语言数据类型

1. char   字符 一个字节, 8 位
2. short  短整数
3. long   长整型
4. double 双精度浮点型
