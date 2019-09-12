chapter3.md
===========


### 数据格式

c声明  | inter数据类型   | 汇编代码后缀   | 大小（字节）
------ | --------------- | -------------- | ------
char   | 字节            | b              | 1
short  | 字              | w              | 2
int    | 双字            | l              | 4
long   | 四字            | q              | 8
char\* | 四字            | q              | 8
flaot  | 单精度          | s              | 4
double | 双精度          | l              | 8


### mov 汇编命令

两个操作数不能都指向内存地址
1. 数据传输, 数据复制到目的位置不做其他变化
mov[bwlq] | absq

下列扩展都是目的大于源的情况

2. 零扩展
movz[bw | bl | wl | bq | wq ] 没有movzlq 使用 movl 代替

3. 符号扩展
movs[bw | bl | wl | bq | wq | lq] | cltq

### 寄存器基本含义

1. rdi rsi rdx rcx 第一个到第四个参数
2. rax 返回值
3. rbx 调用中保存

### 压栈、出栈

栈是从高地址向低地址增长（与堆相反）R[%rsp]<br>
栈底在高地址位置（不变）<br>
栈顶在低地址上（相对与栈底）<br>

1. pushq S<br>
2. R[%rsp] - 8; (对于64位系统来说)<br>
3. 先移动栈的位置、在将S值复制到栈当前位置<br>
4. popq D<br>
5. D = M[R[%rsp]]; 先赋值<br>
6. 然后增加栈指针 R[%rsp] = R[%rsp] + 8;<br>

### 算数与逻辑操作

加载有效地址、一元操作、二元操作和移位

#### leaq 加载、地址计算

leaq 是 movq 指令的变形, 与有效地址无关, 目的操作必须是一个寄存器<br>
如果 %rdx 的值是 x<br>
那么 leaq 7(%rdx, %rdx, 4) 的值 为 5x + 7;<br>

1. DEC 减1
2. INC 加1
3. NEG 取负
4. NOT 取补

#### xor 异或

替换两个不同地址的变量值

```c
x ^= y;
y ^= x;
x ^= y;
```

#### imulq[bwlq] 有符号、mulq[bwlq] 无符号

> (imulq|mulq) S<br>
> 默认使用%rax 作为乘数<br>
> clto 符号拓展<br>
> %rdx 寄存器作为符号拓展的寄存器，使用时需要把值传递给最后一个寄存器的后一个。<br>

#### idivq[bwlq] 有符号、divq[bwlq] 无符号 除法

> (idivq|divq) S<br>
> 默认使用%rax 作为被除数<br>
> cqto 符号拓展<br>
> %rdx 寄存器作为余数拓展的寄存器，使用时需要把值传递给最后一个寄存器的后一个。<br>

#### add[bwlq]、sub[bwlq]、imul[bwlq]、xor、and、or

#### 移位

logic 逻辑、algorithm 算数

1. sal、sar 算数
2. shl、shr 逻辑

### 控制

#### 条件码 CF、ZF、SF、OF

leaq 指令不改变条件码

#### 只改变条件码

1. comp[bwlq] 同sub 但改变寄存器的值
2. test[bwlq] 同add 但改变寄存器的值

#### 跳转

跳转的地址是根据跳转命令后的地址加相对地址。<br>
jmp[l|g|a|b|e|ne|le|ge|ae|be|js|jns]<br>

#### cmov[] 条件复制命令

#### switch 跳转表

> 可用信息：注意点

1. 首个跳转标签为默认标签。
2. 跳转表中相同的标签号为相同的跳转语句。
3. 跳转标签中出现的跳转标签为 switch语句终止后的语句。
4. 未出现的标签语句可能与终止后的标签语句一致。
5. 跳转表首个标签是从零开始、恢复成跳转值需要加上偏移量。
6. 首个跳转标签在跳转表中的重复标签为不存在的值，默认跳转到默认标签。

### 过程

#### 函数

1. 运行时栈
2. 参数到压栈是从后往前进行压栈的
