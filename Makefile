factorial: main.o factorial.o
	gcc -o factorial main.o factorial.o

main.o: main.c factorial.h
	gcc -c main.c

factorial.o: factorial.c factorial.h
	gcc -c factorial.c