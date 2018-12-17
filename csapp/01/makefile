CC=clang

OBJ=main.o show_bytes.o

main: ${OBJ}
	${CC} -o main ${OBJ}

main.o: main.c 01.h
	${CC} -c main.c
show_bytes.o: show_bytes.c
	${CC} -c show_bytes.c

clean:
	rm -rf a.out main ${OBJ}

