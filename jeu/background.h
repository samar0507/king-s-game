#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED



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


	#endif // FONCTION_H_INCLUDED
	
	
	
	
	

