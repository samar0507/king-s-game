#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



typedef struct ennemi
{
SDL_Rect position_entite;
SDL_Surface *affichage_secondaire[20];

int speed;
int sens;
int Frame;
	int vie;
	
	


}ennemi;

int collision_enn(personnage *p, ennemi en);

/*----- ennemi 1-----*/
void initialiser_ennemi1(ennemi *en1);
void afficher_ennemi1(ennemi en1,SDL_Surface *ecran);
void animation1(ennemi *en1,int a,int b);
void deplacement1( ennemi * en1,int* a,int *b);

/*----- ennemi 2-----*/
void initialiser_ennemi2(ennemi *en2);
void afficher_ennemi2(ennemi en2, SDL_Surface *ecran);
void animation2(ennemi *en2,int a,int b);
void deplacement2( ennemi * en2,int* a,int *b);

