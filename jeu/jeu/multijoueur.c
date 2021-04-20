#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "jeu.h"

void initmap( minimap * m)
{
        m->position_mini.x = 0;
        m->position_mini.y = 0;
	m->sprite=NULL;
	m->sprite= IMG_Load("rsz_1rsz_level3.jpg");

}

void afficherminimap (minimap m, SDL_Surface * screen)
{
SDL_BlitSurface(m.sprite, NULL, screen, &m.position_mini);
}



void initialiser_temps(temps *t)
{
t->texte = NULL;

t->position.x=0;
t->position.y=0;

t->police = NULL;
t->police = TTF_OpenFont("ka1.ttf", 20);
strcpy( t->entree,"");  // t->entree[20] = "";   
t->tempsActuel = 0; 
t->tempsPrecedent = 0;
t->min = 0;
t->cmp=0;
// t->d=1;
// t->pause=0;
}

void afficher_temps(temps *t,SDL_Surface *screen)
{

 int continuer = 1;

TTF_Font *police = NULL;//


 SDL_Event event;
    TTF_Init();
 SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};
 
police = TTF_OpenFont("ka1.ttf", 20); //

t->tempsActuel = SDL_GetTicks();
 
sprintf(t->entree, "Temps : %d",t->cmp);

 //t->texte = TTF_RenderText_Blended(police, t->entree, couleurNoire);
t->texte = TTF_RenderText_Shaded(police,t->entree, couleurNoire, couleurBlanche);  //probleme police    gdb prog   where

/*
  while (continuer)
    {
         SDL_PollEvent(&event);

        switch(event.type)
          {
            case SDL_QUIT:
                continuer = 0;
                break;

	 }  */
t->tempsActuel = SDL_GetTicks();
//SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));
 
     
        if (t->tempsActuel - t->tempsPrecedent >= 1000)  /*elwa9te ely t3ada  1000 millisecondes = 1 seconde*/
         {
            t->cmp++;  
 
            if(t->cmp ==60)
             {
               t->cmp=0;
               t->cmp++;
               t->min++;
             }
  sprintf(t->entree, ":%dm :%ds",t->min,t->cmp); //importante
      SDL_FreeSurface(t->texte);
// t->texte = TTF_RenderText_Blended(police, t->entree, couleurNoire);

 t->texte = TTF_RenderText_Shaded(police, t->entree, couleurNoire, couleurBlanche);
      t->tempsPrecedent = t->tempsActuel;  

          }

       
        t->position.x = 400;
        t->position.y = 0;
        SDL_BlitSurface(t->texte, NULL, screen, &t->position);
	
        SDL_Flip(screen);
  // }

}

void free_temps(temps *t,SDL_Surface *screen)
{
	SDL_FreeSurface(t->texte);
 	TTF_CloseFont(t->police);
}


   SDL_Color GetPixel(SDL_Surface* pSurface ,int x,int y)
{
SDL_Color color;
Uint32 col=0;
//Determine position
char* pPosition=(char* ) pSurface->pixels;
pPosition+= (pSurface->pitch * y);
pPosition+= (pSurface->format->BytesPerPixel *x);
memcpy(&col ,pPosition ,pSurface->format->BytesPerPixel);
//convertir color
SDL_GetRGB(col,pSurface->format, &color.r, &color.g, &color.b);
return (color);
}


int collisionPP(personne p, SDL_Surface * Masque)
{
 SDL_Rect pos[8];
int i, x , y;
SDL_Color test;
pos[0].x=p.posperso.x;
pos[0].y=p.posperso.y;

pos[1].x=p.posperso.x+p.posperso.w/2;
pos[1].y=p.posperso.y;

pos[2].x=p.posperso.x+p.posperso.w;
pos[2].y=p.posperso.y;

pos[3].x=p.posperso.x;
pos[3].y=p.posperso.y+p.posperso.h/2;

pos[4].x=p.posperso.x;
pos[4].y=p.posperso.y+p.posperso.h;

pos[5].x=p.posperso.x+p.posperso.w/2;
pos[5].y=p.posperso.y+p.posperso.h;

pos[6].x=p.posperso.x+p.posperso.w;
pos[6].y=p.posperso.y+p.posperso.h;

pos[7].x=p.posperso.x+p.posperso.w;
pos[7].y=p.posperso.y+p.posperso.h/2;

for(i=0;i<8;i++)
   { 
    x=pos[i].x;
    y=pos[i].y;
    test=GetPixel(Masque ,x,y);
   	if(test.r==0&&test.g==0&&test.b==0)
 		 return 1;	
   }
return 0;
}

