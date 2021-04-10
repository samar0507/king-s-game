#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
int main(int argc, char *argv[])
    {
    SDL_Surface *ecran = NULL, *texte = NULL, *fond = NULL,*quit=NULL,*quit1=NULL,*fond1=NULL,*new=NULL,*ops=NULL,*new1=NULL,*ops1=NULL,*sound=NULL,*record=NULL,*game=NULL,*retur=NULL,*L[50],*m[8],*image=NULL;
SDL_Surface *text0=NULL,*retur1=NULL;
    SDL_Rect position,positionquit,positionops,positionnew, postionimage,postiontext0;
    SDL_Event event;
    TTF_Font *police = NULL,*police1=NULL,*policetext=NULL;
    SDL_Color couleurNoire = {0, 0, 0},color= {255,255,255};
    int continuer = 1,d=0,done1=0,x=0,y=0,i=0,ta2=0,tp2=0,i1=128,p1,g=0;
   
    if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
    {
        printf("%s",Mix_GetError());
    }
    Mix_Music *music;
    music=Mix_LoadMUS("jungle.mp3");
    Mix_PlayMusic(music,-1);
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Gestion du texte avec SDL_ttf", NULL);

    fond = IMG_Load("new.jpg");
    fond1 = IMG_Load("a2.jpg");
    quit = IMG_Load("b3.png");
    quit1 = IMG_Load("b6.png");
    new = IMG_Load("b1.png");
    ops = IMG_Load("b2.png");
    new1 = IMG_Load("b4.png");
    ops1 = IMG_Load("b5.png");
    retur = IMG_Load("return.png");
retur1 = IMG_Load("retur1.png");
    police = TTF_OpenFont("ka1.ttf", 65);
    police1 = TTF_OpenFont("ka1.ttf", 65);
policetext=TTF_OpenFont("heyy.ttf", 55);
    texte = TTF_RenderText_Blended(police, "WELCOME", couleurNoire);
text0=TTF_RenderText_Blended(policetext, "LOADING...", color);
L[0]=IMG_Load("1.jpg");
L[1]=IMG_Load("2.jpg");
L[2]=IMG_Load("3.jpg");
L[3]=IMG_Load("4.jpg");
L[4]=IMG_Load("5.jpg");
L[5]=IMG_Load("6.jpg");
L[6]=IMG_Load("7.jpg");
L[7]=IMG_Load("8.jpg");
L[8]=IMG_Load("9.jpg");
L[9]=IMG_Load("10.jpg");
L[10]=IMG_Load("11.jpg");
L[11]=IMG_Load("12.jpg");
L[12]=IMG_Load("13.jpg");
L[13]=IMG_Load("14.jpg");
L[14]=IMG_Load("15.jpg");
L[15]=IMG_Load("16.jpg");
L[16]=IMG_Load("17.jpg");
L[17]=IMG_Load("18.jpg");
L[18]=IMG_Load("19.jpg");
L[19]=IMG_Load("20.jpg");
L[20]=IMG_Load("21.jpg");
L[21]=IMG_Load("22.jpg");
L[22]=IMG_Load("23.jpg");
L[23]=IMG_Load("24.jpg");
L[24]=IMG_Load("25.jpg");
L[25]=IMG_Load("26.jpg");
L[26]=IMG_Load("27.jpg");
L[27]=IMG_Load("28.jpg");
L[28]=IMG_Load("29.jpg");
L[29]=IMG_Load("30.jpg");
L[30]=IMG_Load("31.jpg");
L[31]=IMG_Load("32.jpg");
L[32]=IMG_Load("33.jpg");
L[33]=IMG_Load("34.jpg");
L[34]=IMG_Load("35.jpg");
L[35]=IMG_Load("36.jpg");
L[36]=IMG_Load("37.jpg");
L[37]=IMG_Load("38.jpg");
L[38]=IMG_Load("39.jpg");
L[39]=IMG_Load("40.jpg");
L[40]=IMG_Load("41.jpg");
L[41]=IMG_Load("42.jpg");
L[42]=IMG_Load("43.jpg");
L[43]=IMG_Load("44.jpg");
L[44]=IMG_Load("45.jpg");
L[45]=IMG_Load("46.jpg");
L[46]=IMG_Load("47.jpg");
L[47]=IMG_Load("48.jpg");
L[48]=IMG_Load("49.jpg");
L[49]=IMG_Load("50.jpg");

postionimage.w=1000;
postionimage.h=667;
postiontext0.x=500;
postiontext0.y=500;
while(i!=50)
{

ta2 = SDL_GetTicks();


       if (ta2 - tp2 >= 150)
        {   i++;

         SDL_BlitSurface(L[i],NULL,ecran,&postionimage);
SDL_BlitSurface(text0,NULL,ecran,&postiontext0);



          SDL_Flip(ecran);
           tp2 = ta2;

       }}
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        { 
        case SDL_QUIT:
            continuer = 0;
    
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                continuer = 0;
                 break;
                case SDLK_q:
               y = 0;
               
                break;
                }
 
           case SDL_MOUSEBUTTONDOWN:
if(y==0)
{
            if ((event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>150 && event.button.x<430)&&(event.button.y>100 && event.button.y<212))
          {  y=1;
           }
            else if ((event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>150 && event.button.x<430)&&(event.button.y>250 && event.button.y<362))
            y=2;
            else if ((event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>150 && event.button.x<430)&&(event.button.y>400 && event.button.y<521))
       continuer = 0;}
 if((event.button.x>0 && event.button.x<70)&&(event.button.y>0 && event.button.y<70))
           y=0;
          break;
                   
                   
            case SDL_MOUSEMOTION:
            if    ((event.motion.x>150 && event.motion.x<430)&&(event.motion.y>400 && event.motion.y<521))
                x=1;
            else if((event.motion.x>150 && event.motion.x<430)&&(event.motion.y>100 && event.motion.y<212))
                x=2;
            else if((event.motion.x>150 && event.motion.x<430)&&(event.motion.y>250 && event.motion.y<362))
                x=3;
          else if((event.button.x>0 && event.button.x<70)&&(event.button.y>0 && event.button.y<70))
          d=1;
            break;

        }

       

m[0]=IMG_Load("m1.jpg");
    m[1]=IMG_Load("m2.jpg");
     m[2]=IMG_Load("m3.jpg");
      m[3]=IMG_Load("m4.jpg");
      m[4]=IMG_Load("m5.jpg");
     m[5]=IMG_Load("m6.jpg");
    m[6]=IMG_Load("m7.jpg");
     m[7]=IMG_Load("m8.jpg");

 
  position.x = 0;
        position.y = 0;
  if(g==0)    
{SDL_BlitSurface(m[0],NULL,ecran,&(position));
}
else if(g==1)
{SDL_BlitSurface(m[1],NULL,ecran,&(position));
}
else if(g==2)
{SDL_BlitSurface(m[2],NULL,ecran,&(position));
}
else if(g==3)
{SDL_BlitSurface(m[3],NULL,ecran,&(position));
}
else if(g==4)
{SDL_BlitSurface(m[4],NULL,ecran,&(position));
}
else if(g==5)
{SDL_BlitSurface(m[5],NULL,ecran,&(position));
}
else if(g==6)
{SDL_BlitSurface(m[6],NULL,ecran,&(position));
}
else if(g==7)
{SDL_BlitSurface(m[7],NULL,ecran,&(position));
}
g++;
if(g>7)
{g=0;}
          

        position.x = 350;
        position.y = 20;
        SDL_BlitSurface(texte, NULL, ecran, &position);
        positionquit.x = 150;
        positionquit.y = 400;
        SDL_BlitSurface(quit, NULL, ecran, &positionquit);
        positionops.x = 150;
        positionops.y = 250;
        SDL_BlitSurface(ops, NULL, ecran, &positionops);
        positionnew.x = 150;
        positionnew.y = 100;
        SDL_BlitSurface(new, NULL, ecran, &positionnew);

        if(x==1)
        {
            SDL_BlitSurface(quit1,NULL,ecran,&positionquit);
        }
        else if(x==2)
        {
            SDL_BlitSurface(new1,NULL,ecran,&positionnew);
        }
        else if(x==3)
        {
            SDL_BlitSurface(ops1,NULL,ecran,&positionops);
        }
 

      
        x=0;
        if(y==1)
        {
            position.x = 0;
        position.y = 0;
        SDL_BlitSurface(fond1,NULL,ecran,&position);
        position.x = 0;
        position.y = 0;
        SDL_BlitSurface(retur, NULL, ecran, &position);
      if(d==1)
     {position.x = 0;
        position.y = 0;
      SDL_BlitSurface(retur1,NULL,ecran,&position);}
        } else if(y==2)
       {position.x = 0;
        position.y = 0;
        SDL_BlitSurface(fond1,NULL,ecran,&position);
        sound = TTF_RenderText_Blended(police1, "sound", color);
        record = TTF_RenderText_Blended(police1, "record", color);
        position.x = 200;
        position.y = 100;
        SDL_BlitSurface(sound, NULL, ecran, &position); 
        position.x = 200;
        position.y = 250;
        SDL_BlitSurface(record, NULL, ecran, &position);
        position.x = 0;
        position.y = 0;
        SDL_BlitSurface(retur, NULL, ecran, &position);
 if(d==1)
     {position.x = 0;
        position.y = 0;
      SDL_BlitSurface(retur1,NULL,ecran,&position);}

       }
d=0;  
       SDL_Flip(ecran);
      }

    TTF_CloseFont(police);
     TTF_Quit();
    SDL_FreeSurface(ops);
    SDL_FreeSurface(texte);
    SDL_FreeSurface(quit);
    SDL_FreeSurface(new);

    Mix_FreeMusic(music);
    SDL_Quit();

    return EXIT_SUCCESS;
}
