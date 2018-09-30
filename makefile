all: homework.o
	gcc homework.o

homework.o: homework.c
	gcc -c homework.c

clear:
	rm *.o

run:
	./a.out
