#include <stdio.h>
#include <stdlib.h>
#include "ennemi.h"
int main(int argc, char *argv[])
{
int continuer=1;
int a,b;
ennemi en1,en2,en3;

SDL_Surface *ecran=NULL;
SDL_Rect *position_ecran;
SDL_Event event; 
int dep=0;


   SDL_Surface *image=NULL;
   SDL_Rect postionimage;
   image=IMG_Load("haha.png");
  
    postionimage.x=0;
    postionimage.y=0;
en1.vie=1;
int score=2;
initialiser_ennemi1(&en1);
SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER);
 TTF_Init();
 SDL_EnableKeyRepeat(100,100); 

    ecran = SDL_SetVideoMode(1280,631,32,SDL_HWSURFACE|SDL_DOUBLEBUF); 
    SDL_WM_SetCaption("ennemi code", NULL);
    
postionimage.x=0;
    postionimage.y=0;

while(continuer)
{

SDL_PollEvent(&event);
        switch(event.type)
        { 
        case SDL_QUIT:
            continuer = 0;
    
            break;
            case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_RIGHT:
            dep=1;
            break;
            case SDLK_LEFT:
            dep=2;
            break;
            }}


    SDL_BlitSurface(image, NULL, ecran, &postionimage);
    
     if(collision_enn(&p,en1)==0)
    {en1.vie--;
    
    }
 
   afficher_ennemi1(en1,ecran);
    deplacement1(&en1,&a,&b);
  animation1(&en1,a,b);
 
if(en1.vie==0)
{continuer=0;
printf("GAME OVER\n");}

   
 SDL_Flip(ecran);

}
TTF_Quit();
SDL_Quit();
   
 return EXIT_SUCCESS;}
