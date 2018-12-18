CC = clang

FLAGS = "-Wall -O0"

# OBJS = main.o show_bytes.o
# OBJS := $(patsubst %.c,%.o, $(wildcard *.c))
# OBJS := $(wildcard *.o)

objects := $(patsubst %.c,%.o, $(wildcard *.c))
main : $(objects)
	${CC} -o main $(objects)
	@${CC} -MM main.c

# 查找源文件目录
# vpath %.c src
# vpath %.o src
# vpath %.h headers

# main: ${OBJS}
# 	${CC} -o main ${OBJS}
# # 不显示命令
# 	@${CC} -MM main.c

# 隐晦规则
# main.o: 01.h
# main.o: main.c 01.h
# ${CC} -c main.o main.c 01.h -I./headers

# 隐晦规则
# show_bytes.o: show_bytes.c
# 	${CC} -c show_bytes.c

print: *.c
	lpr -p $?
	touch print

# 伪目标
.PHONY: clean all run
# 放置在文件最后面
clean:
	@cat main.c
	-rm main ${OBJS}

all:
	-rm a.out

run:
	@./main
