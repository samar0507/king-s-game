#include "jeu.h"
int main(int argc, char *argv[])
{
int continuer=1;
int a,b;
ennemi en1,en2;
SDL_Surface *ecran=NULL;
SDL_Rect *position_ecran;
SDL_Event event; 
int dep=0;
int tab[400]={0};
SDL_Color couleurNoir={0,0,0};
Uint32 t_prev;
   SDL_Surface *image=NULL;
   SDL_Rect postionimage;
   image=IMG_Load("haha.png");
  personne p;
    postionimage.x=0;
    postionimage.y=0;
en1.vie=1;
int score=2;
initialiser_ennemi1(&en1);
initperso(&p, couleurNoir);
SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER);
 TTF_Init();
 SDL_EnableKeyRepeat(100,100); 

    ecran = SDL_SetVideoMode(1280,631,32,SDL_HWSURFACE|SDL_DOUBLEBUF); 
    SDL_WM_SetCaption("ennemi code", NULL);
    
postionimage.x=0;
    postionimage.y=0;
while(continuer)
{t_prev=SDL_GetTicks();
SDL_PollEvent(&event);
        switch(event.type)
        { 
        case SDL_QUIT:
            continuer = 0;
    
            break;
   case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {  case SDLK_RIGHT:
                  tab[SDLK_RIGHT]=1;
          
                    break;
case SDLK_LEFT:
tab[SDLK_LEFT]=1;
             
                
                    break;
                          
 case SDLK_SPACE:
              p.acc=20;    
                        break;
 case SDLK_g:
              p.acc=0;    
                        break;
 case SDLK_UP:
    tab[SDLK_UP]=1;
                        break;
case SDLK_p:
              p.vie=1;    
                        break;
case SDLK_o:
              p.vie=2;    
                        break;
case SDLK_i:
              p.vie=3;    
                        break;
case SDLK_u:
            p.vie=0;  
                        break;
case SDLK_a:
             p.posperso.y=300;  
                        break;
       }
 
        break;
                  
            
                  
                       }    
   
       if( tab[SDLK_RIGHT]==1)
{p.dep=1;
p.dr=0;
 deplacerperso(&p);
animerperso(&p);
}
if( tab[SDLK_UP]==1)
{saut(&p);

}
if(tab[SDLK_LEFT]==1)
{       p.dep=0;
                   p.dr=1;
                  deplacerperso(&p);  
animerperso(&p);
}




    SDL_BlitSurface(image, NULL, ecran, &postionimage);
    
     if(collision_enn(&p,en1)==0)
    {en1.vie--;
    }
afficher_ennemi1(en1,ecran);
    deplacement1(&en1,&a,&b);
  animation1(&en1,a,b);
 
/*if(en1.vie==0)
{continuer=0;
printf("GAME OVER\n");}*/
//afficherp(p,ecran);
   // depp(&p,dep);
//scor(&p, couleurNoir);
afficherperso(&p,ecran);
for(int i=0;i<400;i++)
{tab[i]=0;
}p.dt=(SDL_GetTicks()-t_prev)/16;
   SDL_Flip(ecran);
 
}
TTF_Quit();
SDL_Quit();
   
 return EXIT_SUCCESS;}
