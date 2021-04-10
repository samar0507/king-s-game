#include "ennemi.h"
int main(int argc, char *argv[])
{
int continuer=1;
int a,b;
ennemi en1,en2,en3;
int vien1=2;
SDL_Surface *ecran=NULL;
SDL_Rect *position_ecran;
SDL_Event event; 
//personnage p;

   SDL_Surface *image=NULL;
   SDL_Rect postionimage;
   image=IMG_Load("haha.png");
   
    postionimage.x=0;
    postionimage.y=0;

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
            }


    SDL_BlitSurface(image, NULL, ecran, &postionimage);
    
    //if(collision_enn(&p,en1)==1)
   // vien1--;
  if(vien1!=0)
  {
   afficher_ennemi1(en1,ecran);
  
 deplacement(&en1,&a,&b);
  animation1(&en1,a,b);
}
 SDL_Flip(ecran);

}
TTF_Quit();
SDL_Quit();
   
 return EXIT_SUCCESS;}
