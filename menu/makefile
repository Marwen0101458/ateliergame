CFLAGS=-w -O2 -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf

all : main.o
	gcc main.o -o game.x $(CFLAGS)

main.o : main.c
	gcc -c main.c -o main.o

clean :
	 rm -rf *.o
