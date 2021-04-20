#include "jeu.h"
void initperso(personne *p,SDL_Color couleurNoir)

{ p->k=0;
 p->police = TTF_OpenFont("ka1.ttf", 40);

p->posperso.x =0;
         p->posperso.y =350;

p->posimgvie.x = 800;
        p->posimgvie.y = 0;
p->vitesse=5;
p->acc=0;
p->up=0;
char nomFich[20];
int i;
for(i=0;i<20;i++)
{
    sprintf(nomFich,"a%d.png",i);
    p->tab[i]=IMG_Load(nomFich);
}
char nomvie[20];
int j;
for(j=0;j<4;j++)
{
    sprintf(nomvie,"v%d.png",j);
    p->tabvie[j]=IMG_Load(nomvie);
}
p->dr=0;
p->num=1;
p->vie=0;
p->posscore.x=500;
p->posscore.y=0;
   
 sprintf(p->temps, "score : %d",p->k);
   p->scor= TTF_RenderText_Blended(p->police, p->temps,  couleurNoir);
 p->score= TTF_RenderText_Blended(p->police, "score:.....",  couleurNoir);

}
void scor(personne *p,SDL_Color couleurNoir)
{
 if (p->tmpact - p->tmppre >= 100) 
        {
           p->k += 1; 
            sprintf(p->temps, "score : %d", p->k); 
            SDL_FreeSurface(p->scor); 
             p->scor= TTF_RenderText_Blended(p->police, p->temps,  couleurNoir); 
             p->tmppre = p->tmpact; 
        }


}

void afficherperso(personne *p,SDL_Surface *ecran)
{  
SDL_BlitSurface(p->tab[p->num],NULL,ecran,&(p->posperso));
SDL_BlitSurface(p->tabvie[p->vie], NULL, ecran, &(p->posimgvie));
SDL_BlitSurface(p->score, NULL, ecran, &(p->posscore));
}

void deplacerperso(personne *p)
{
if(p->dep==1)
{
p->posperso.x+=((0.5*p->acc*p->dt)+(p->vitesse*p->dt));
}
else if(p->dep==0)
{p->posperso.x-=((0.5*p->acc*p->dt)+(p->vitesse*p->dt));
}

}
/*
void deplacerperso(personne *p)
{
if(p->dep==1)
{
p->posperso.x+=(p->acc+p->vitesse);
}
else if(p->dep==0)
{p->posperso.x-=(p->acc+p->vitesse);
}

}
*/
void animerperso(personne *p)
 {  
     if(p->dr==0)
     {if(p->num>=5)
      p->num=1;
      else p->num++;
     }
     else 
     {
      if(p->num==10||p->num<6)
       p->num=6;
       else p->num++;
      }
      }

void saut(personne *p)
{if(p->up==0)
 { if(p->posperso.y>200)
 p->posperso.y-=(p->dt*p->vitesse)/6;
  else 
  p->up=1;
  }
  else 
   {if(p->posperso.y<300)
     p->posperso.y+=(p->dt*p->vitesse)/6;
     else
 p->up=0;
    }} 


































