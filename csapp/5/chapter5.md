chapter5.md
===========

twiddle
-------

### 阻碍因素1: 内存别名使用
```c
void twiddle1(long *xp, long *yp)
{
    *xp += *yp;
    *xp += *yp;
}

void twiddle2(long *xp, long *yp)
{
    *xp += 2 * *yp;
}
```

两个函数的参数在地址一致时结果不一致

1. 版本1 为：<br>
*xp += *yp; => *xp 为原来的两倍, 同*yp(地址相同)<br>
*xp += *yp; => *xp 为原来的四倍, 同*yp(地址相同)<br>

2. 版本2 为：<br>
*xp += 2 * *yp; => *xp 为原来的三倍, 同*yp(地址相同)<br>

### 妨碍因素2: 用内联函数替换优化函数调用
