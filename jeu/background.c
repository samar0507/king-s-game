#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "jeu.h"
void initBackg (background * b)
{
b->bckg[0]= IMG_Load ("premier.jpg");
b->bckg[1]= IMG_Load ("deuxieme1.jpg");
b->bckg[2]= IMG_Load ("troisieme.jpg");
b->pos_bckg.x=0;
b->pos_bckg.y=0;
b->camera.x=0;
b->camera.y=0;
b->camera.w=8000;
b->camera.h=600;
b->scroll=-1;
 b->stage=0;
b->music=Mix_LoadMUS("jungle.mp3");
}

void showBackg(SDL_Surface  *screen, background b)
{  
    SDL_BlitSurface (b.bckg[b.stage],&(b.camera),screen,&(b.pos_bckg));
}
void scrolling (background *b , SDL_Surface *screen )
{
	if (b->scroll==0)
	b->camera.x-=5;
	if (b->scroll==1)
	b->camera.x+=5;
}



   
   
   
   
   
   
   
   
