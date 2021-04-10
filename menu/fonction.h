#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

  
  
  typedef struct 
{
SDL_Surface *ecran,*fond, *texte,*quit,*quit1,*fond1,*new,*ops,*new1,*ops1,*sound,*record,*game,*retur,*retur1,*z,*z1,*x,*x1,*h,*h1,*j,*j1,*m1,*m2,*m3,*m4,*m5,*m6,*m7,*m8;
    SDL_Rect position,positionquit,positionops,positionnew, postionimage,postiontext0;
    
    TTF_Font *police,*police1;
    
Mix_Music *music;
}menu;
menu initialisation(menu m,SDL_Color couleurNoire ,SDL_Color color);

void menuprincipale(menu m,SDL_Color couleurNoire,SDL_Color color ,SDL_Event event,Mix_Chunk *son);
void freedom(menu m);
void jeu(menu m,SDL_Color couleurNoire ,SDL_Color color,SDL_Event event);
void option(menu m,SDL_Color couleurNoire ,SDL_Color color,SDL_Event event);
#endif // FONCTION_H_INCLUDED

