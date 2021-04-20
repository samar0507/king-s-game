prog: jeu.o ennemi.o perso.o background.o multijoueur.o
	gcc  jeu.o ennemi.o perso.o background.o multijoueur.o -o prog -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
jeu.o: jeu.c
	gcc -c jeu.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
perso.o: perso.c
	gcc -c perso.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
ennemi.o: ennemi.c
	gcc -c ennemi.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
background.o: background.c
	gcc -c background.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
multijoueur.o: multijoueur.c
	gcc -c multijoueur.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
	
