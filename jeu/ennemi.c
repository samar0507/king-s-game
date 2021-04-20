
#include "jeu.h"
void initialiser_ennemi1(ennemi *en1)
{

en1->position_entite.x=200;
en1->position_entite.y=200;
en1->position_entite.w=237;
en1->position_entite.h=259;

	char entites[10];
	int i;
  for ( i = 0; i <= 10; i++)
  {
      sprintf(entites,"%d.png",i);
    en1->affichage_secondaire[i]=IMG_Load(entites);
  }
en1->Frame=0;

en1->sens=0;//droite
}
void afficher_ennemi1(ennemi en1,SDL_Surface *ecran)
{
SDL_BlitSurface(en1.affichage_secondaire[en1.Frame],NULL,ecran ,&(en1.position_entite));
}
void animation1(ennemi *en1,int a,int b)
{
if(en1->Frame<=a || en1->Frame>=b)
	{
	en1->Frame=a+1;
	}
	en1->Frame++;
	

}
void deplacement1( ennemi  *en1,int* a,int *b)
{

int r =rand()%650;
int r1=rand()%100;
int i;

if(en1->sens==0)
{if(en1->position_entite.x>=r1 && en1->position_entite.x<r )
{

++(en1->position_entite.x);
*a=2;
*b=5;

}
if(en1->position_entite.x==r)
 	{
 	
 	en1->sens=1;

 	}
}
else 
{
if(en1->position_entite.x>r1 && en1->position_entite.x<=r )
{
*a=7;
*b=10;
--(en1->position_entite.x);
}
}
if(en1->position_entite.x==r1)
 	{
 	en1->sens=0;

}

}
int collision_enn(personne *p, ennemi en)
{
if (((p->posperso.x>en.position_entite.x+en.position_entite.w) ||(p->posperso.x+5<en.position_entite.x)))

{
return 0;}
else
return 1;
}

