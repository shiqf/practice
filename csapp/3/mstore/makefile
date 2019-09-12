CC = clang
FLAGS = -Og

# VPATH = src:headers
# 查找源文件目录
# vpath %.c src

objects := $(patsubst %.c,%.o, $(wildcard *.c))

main : $(objects)
	${CC} -o main $(objects) ${FLAGS}

# 伪目标
.PHONY: clean all run

# 放置在文件最后面
clean:
	@rm main ${objects}

all:
	-rm a.out main ${objects}

run:
	@./main
