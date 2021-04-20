#include "jeu.h"
int main(int argc, char *argv[])
{
int continuer=1;
int a,b;
ennemi en1,en2;
//nouv
miniknight k;
minimap m;
temps t;
//nouv
SDL_Surface *ecran=NULL;
SDL_Rect *position_ecran;
SDL_Event event; 
background bckg;

SDL_Surface *surfM=IMG_Load("rsz_level3masque.jpg"); //nouv

int dep=0;
int tab[400]={0};
SDL_Color couleurNoir={0,0,0};
Uint32 t_prev;
   SDL_Surface *image=NULL;
   SDL_Rect postionimage;

    personne p;
Uint8 *key=SDL_GetKeyState(NULL);    //nouv
    postionimage.x=0;
    postionimage.y=0;

// nouv
k.sprite= IMG_Load("rsz_knight.png");
k.position_miniknight.x=0;
k.position_miniknight.y=65;
//nouv

en1.vie=1;
int score=2;

//init nouv
initmap(&m);
initialiser_temps(&t);
//fin init nouv

initialiser_ennemi1(&en1);
initBackg (&bckg);
initperso(&p, couleurNoir);
SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER);
 TTF_Init();
 SDL_EnableKeyRepeat(10,10); 

    ecran = SDL_SetVideoMode(1200,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF); 
    SDL_WM_SetCaption("jeu code", NULL);
    
postionimage.x=0;
postionimage.y=0;
while(continuer)
{

t_prev=SDL_GetTicks();
showBackg(ecran,bckg);
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
         case SDLK_w:
            bckg.stage=0;
            break;
          case SDLK_q:
            bckg.stage=1;
            break;
          case SDLK_e:
            bckg.stage=2;
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
      case SDLK_k:
tab[SDLK_k]=1;
                        break;
         case SDLK_l:
tab[SDLK_l]=1;
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
if(tab[SDLK_l]==1)
            {
            bckg.scroll=1;
           scrolling (&bckg , ecran );}
           else if (tab[SDLK_k]==1)
            {
            bckg.scroll=0;
           scrolling (&bckg , ecran );}




    
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
afficherminimap (m,ecran); //nouv

	k.position_miniknight.x=p.posperso.x*25/100;
	k.position_miniknight.y=p.posperso.y*25/100;

afficherperso(&p,ecran);

SDL_BlitSurface(k.sprite, NULL, ecran, &k.position_miniknight); // nouv

for(int i=0;i<400;i++)
{tab[i]=0;
}p.dt=(SDL_GetTicks()-t_prev)/16;

afficher_temps(&t,ecran); //nouv     core dumped here my friend






   SDL_Flip(ecran);
 


}

free_temps(&t,ecran);

TTF_Quit();
SDL_Quit();
   
 return EXIT_SUCCESS;
}
