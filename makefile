allJ: homeJ.o
	gcc -o jason homeJ.o

allA: homework.o
	gcc -o aaron homework.o

homeJ.o: homeJ.c
	gcc -c homeJ.c

homework.o: homework.c
	gcc -c homework.c

clear:
	rm *.o

runJ:
	./jason

runA:
	./aaron
