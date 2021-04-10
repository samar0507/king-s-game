prog: ss.o fonction.o
	gcc  ss.o fonction.o -o prog -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
ss.o: ss.c
	gcc -c ss.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
fonction.o: fonction.c
	gcc -c fonction.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
