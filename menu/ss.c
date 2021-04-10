#include "fonction.h"
int main(int argc, char *argv[])
{
    menu m;
char pause;
 
    
Mix_Chunk *son; 
    
m.ecran=NULL;
m.texte = NULL;
m.fond=NULL;

m.quit=NULL;
m.quit1=NULL;
m.fond1=NULL;
m.new=NULL;
m.police=NULL;
m.police1=NULL;
m.retur1=NULL;m.retur=NULL;
m.z=NULL;m.z1=NULL;m.x=NULL;m.x1=NULL;m.h=NULL;m.h1=NULL;m.j=NULL;m.j1=NULL;
m.ops=NULL;m.new1=NULL;m.ops1=NULL;m.sound=NULL;m.record=NULL;m.game=NULL;
m.m1=NULL;m.m2=NULL;m.m3=NULL;m.m4=NULL;m.m5=NULL;m.m6=NULL;m.m7=NULL;m.m8=NULL;
SDL_Color couleurNoire = {0, 0, 0},color={255,255,255};
    SDL_Event event;
  
 menuprincipale(m,couleurNoire , color, event,son);

 freedom( m);
  

    return EXIT_SUCCESS;
}
