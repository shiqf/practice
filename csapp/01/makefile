CC=clang

OBJS=main.o show_bytes.o

# OBJS := $(wildcard *.o)
# objects := $(patsubst %.c,%.o, $(wildcard *.c))
# foo : $(objects)
# 	${CC} foo $(objects)

main: ${OBJS}
	${CC} -o main ${OBJS}

# main.o: main.c 01.h 隐晦规则
main.o: 01.h

# 隐晦规则
# show_bytes.o: show_bytes.c
# 	${CC} -c show_bytes.c

print: *.c
	lpr -p $?
	touch print

# 伪目标
.PHONY: clean
# 放置在文件最后面
clean:
	cat main.c
	-rm main ${OBJS}

