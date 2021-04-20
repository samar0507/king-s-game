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

typedef struct
{
SDL_Rect position_miniknight;

SDL_Surface *sprite;
}miniknight;

typedef struct
{
SDL_Rect position_mini;

SDL_Surface *sprite;
}minimap;

typedef struct temps
{
SDL_Surface *texte;
SDL_Rect position;
  
TTF_Font *police ;

char entree[20];
SDL_Color couleurBlanche,couleurNoire ;
int tempsActuel,tempsPrecedent;
int min,cmp;
}temps;

/*--------personne --------*/

typedef struct 
{SDL_Surface *tab[20],*tabvie[4],*scor,*score;
SDL_Rect posperso,posimgvie,posscore;
double vitesse,acc;
 TTF_Font *police;
int dep;
int up;
Uint32 dt,tmpact,tmppre,k;
int dr,num,vie;
char temps[20];
}personne;
typedef struct
{
SDL_Surface  *bckg[3];
SDL_Rect pos_bckg,camera;
Mix_Music *music;
int scroll;
int stage;
}background;
 
void initBackg (background * b);
void showBackg(SDL_Surface * screen, background b);
void scrolling (background *b , SDL_Surface *screen );
void initperso(personne *p,SDL_Color couleurNoir);
void afficherperso(personne *p,SDL_Surface *ecran);
void deplacerperso(personne *p);
void animerperso(personne *p);
void saut(personne *p);
void scor(personne *p,SDL_Color couleurNoir);

int collision_enn(personne*p, ennemi en);

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

/*-----background +minimap----- */

void initmap( minimap * m);

void afficherminimap (minimap m, SDL_Surface * screen);

void initialiser_temps(temps *t);

void afficher_temps(temps *t,SDL_Surface *screen);

void free_temps(temps *t,SDL_Surface *screen);

SDL_Color GetPixel(SDL_Surface* pSurface ,int x,int y);

int collisionPP(personne p, SDL_Surface * Masque);


