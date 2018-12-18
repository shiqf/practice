CC = clang
FLAGS = "-Wall -O0"

VPATH = src:headers
# 查找源文件目录
# vpath %.c src

headers := ${notdir ${wildcard headers/*.h}}
objects := $(patsubst %.c,%.o, $(wildcard *.c))

main : $(objects)
	${CC} -o main $(objects)

# 伪目标
.PHONY: clean all run

# 放置在文件最后面
clean:
	@cat main.c
	@-rm main ${OBJS}

all:
	-rm a.out main ${OBJS}

run:
	@./main
