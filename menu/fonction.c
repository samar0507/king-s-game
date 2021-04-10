
#include "fonction.h"
 
menu initialisation(menu m,SDL_Color couleurNoire ,SDL_Color color)
{
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{ printf("%s",Mix_GetError());
}


m.music=Mix_LoadMUS("jungle.mp3");

  m.fond = IMG_Load("new.jpg");
 m.fond1 = IMG_Load("a2.jpg");
 m.quit = IMG_Load("b3.png");
 m.quit1 = IMG_Load("b6.png");
m.new = IMG_Load("b1.png");
m.ops = IMG_Load("b2.png");
m.new1 = IMG_Load("b4.png");
m.ops1 = IMG_Load("b5.png");
m.retur=IMG_Load("return.png");
m.retur1=IMG_Load("retur1.png");
  SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    m.police = TTF_OpenFont("ka1.ttf", 65);
m.police1 = TTF_OpenFont("ka1.ttf", 65);
  m.texte = TTF_RenderText_Blended(m.police, "WELCOME", couleurNoire);
    m.sound = TTF_RenderText_Blended(m.police1, "sound", color);
    m.record = TTF_RenderText_Blended(m.police1, "record", color);
    m.game = TTF_RenderText_Blended(m.police1, "Loading...", couleurNoire);
  
      m.z1=IMG_Load("Z2.jpg");
      m.z=IMG_Load("Z1.jpg");
      m.x=IMG_Load("X1.jpg");
      m.x1=IMG_Load("X2.jpg");
      m.h=IMG_Load("H1.jpg");
     m.h1=IMG_Load("H2.jpg");
     m.j=IMG_Load("J1.jpg");
     m.j1=IMG_Load("J2.jpg");
     
m.m1=IMG_Load("m1.jpg");
     m.m2=IMG_Load("m2.jpg");
      m.m3=IMG_Load("m3.jpg");
     m.m4=IMG_Load("m4.jpg");
      m.m5=IMG_Load("m5.jpg");
     m.m6=IMG_Load("m6.jpg");
   m.m7=IMG_Load("m7.jpg");
     m.m8=IMG_Load("m8.jpg");

    return m;
}

void jeu(menu m,SDL_Color couleurNoire ,SDL_Color color,SDL_Event event)
{
m.position.x = 0;
         m.position.y = 0; 
         SDL_BlitSurface(m.fond,NULL,m.ecran,&(m.position));
         
         m.position.x = 0;
        m.position.y = 0;
        SDL_BlitSurface(m.retur, NULL, m.ecran, &(m.position));
  
         m.position.x = 100;
        m.position.y = 150;
   SDL_BlitSurface(m.game, NULL, m.ecran, &(m.position));
        SDL_Flip(m.ecran); 
}
void option(menu m,SDL_Color couleurNoire ,SDL_Color color,SDL_Event event)
         { 
         m.position.x = 0;
          m.position.y = 0; 
          SDL_BlitSurface(m.fond1,NULL,m.ecran,&(m.position));
           m.sound = TTF_RenderText_Blended(m.police1, "sound", color); 
           m.record = TTF_RenderText_Blended(m.police1, "record", color); 
           m.position.x = 200; 
           m.position.y = 100;
            SDL_BlitSurface(m.sound, NULL, m.ecran, &(m.position)); 
            m.position.x = 200;
             m.position.y = 400; 
             SDL_BlitSurface(m.record, NULL, m.ecran, &(m.position));
              m.position.x = 0;
        m.position.y = 0;
        SDL_BlitSurface(m.retur, NULL, m.ecran, &(m.position)); 
       
 m.position.x = 100;
        m.position.y = 200;
        SDL_BlitSurface(m.z, NULL, m.ecran, &(m.position)); 
m.position.x = 230;
        m.position.y = 200;
        SDL_BlitSurface(m.x, NULL, m.ecran, &(m.position)); 
m.position.x = 360;
        m.position.y = 200;
        SDL_BlitSurface(m.h, NULL, m.ecran, &(m.position)); 
 m.position.x = 490;
        m.position.y = 200;
        SDL_BlitSurface(m.j, NULL, m.ecran, &(m.position)); 
             SDL_Flip(m.ecran);
             }
void menuprincipale(menu m,SDL_Color couleurNoire,SDL_Color color ,SDL_Event event,Mix_Chunk *son)
{  int continuer = 1,d=0,done1=0,x,y=0,f,exit=1,c=0,g=0,i=50;
m=initialisation(m,couleurNoire ,color);
son=Mix_LoadWAV("bb.wav");
      Mix_PlayMusic(m.music,-1);
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    m.ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
 SDL_WM_SetCaption("menu", NULL);

  SDL_FillRect(m.ecran, NULL, SDL_MapRGB(m.ecran->format, 255, 255, 255));
 

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
if(y==2)
{
                case SDLK_z:
i=i-10;
Mix_VolumeMusic(i);
f=0;
break;

case SDLK_x:
i=i+10;
Mix_VolumeMusic(i);
f=1;
break;
case SDLK_h:      
Mix_HaltMusic();
f=2; 
break;
case SDLK_j:
Mix_PlayMusic(m.music,-1);
 f=3;
break;
case SDLK_f:
while(exit)
{SDL_WM_ToggleFullScreen(m.ecran); 
if((event.type==SDL_KEYDOWN)&&(event.key.keysym.sym==SDLK_f))
{
exit=0;
}
}
continue;
break;
case SDLK_r:
m.ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
continue;

break;}
      case SDLK_DOWN:
               if(c==0)
              {  c=1;

               break; }
               if(c==1)
               { c=2;
                    break;}
               if(c==2)
              {  c=3;
                  
               break;}
 if(c==3)
              {  c=1;
                  
               break;}
   
break;
                break;
            case SDLK_UP:
if(c==0)
{c=3;
break;}
if(c==3)
   { c=2;
break;}
if(c==2)
   { c=1;
break;}
if(c==1)
    {c=3;
break;}
            

                break;
            case SDLK_SPACE:
            if(c==3)
            { 
continuer=0;
}
         if(c==1)
        {
  y=1;}
else if(c==2)
{y=2;
}
                
 break;     
                }
 
           case SDL_MOUSEBUTTONDOWN:
if(y==0)
{            if ((event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>200 && event.button.x<480)&&(event.button.y>100 && event.button.y<212))
          {Mix_PlayChannel (1,son,0);
  y=1;
           }
            else if ((event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>200 && event.button.x<480)&&(event.button.y>250 && event.button.y<372))
           {Mix_PlayChannel (1,son,0);
 y=2;}
            else if ((event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>200 && event.button.x<480)&&(event.button.y>400 && event.button.y<512))
      
           {Mix_PlayChannel (1,son,0);
 continuer = 0;}}
 if((event.button.x>0 && event.button.x<70)&&(event.button.y>0 && event.button.y<70))
           y=0;
          break;
                   
                   
            case SDL_MOUSEMOTION:
            if    ((event.motion.x>200 && event.motion.x<480)&&(event.motion.y>100 && event.motion.y<212))
                x=1;
            else if((event.motion.x>200 && event.motion.x<480)&&(event.motion.y>250 && event.motion.y<372))
                x=2;
            else if((event.motion.x>200 && event.motion.x<480)&&(event.motion.y>400 && event.motion.y<512))
                x=0;
          else if((event.button.x>0 && event.button.x<70)&&(event.button.y>0 && event.button.y<70))
          d=1;
          c=0;
            break;

        }
             m.position.x = 0;
        m.position.y = 0;
  if(g==0)    
{SDL_BlitSurface(m.m1,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==1)
{SDL_BlitSurface(m.m2,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==2)
{SDL_BlitSurface(m.m3,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==3)
{SDL_BlitSurface(m.m4,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==4)
{SDL_BlitSurface(m.m5,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==5)
{SDL_BlitSurface(m.m6,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==6)
{SDL_BlitSurface(m.m7,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
else if(g==7)
{SDL_BlitSurface(m.m8,NULL,m.ecran,&(m.position));
SDL_Delay(20);}
g++;
if(g>7)
{g=0;}
       if(c==1)
x=1;
else if(c==2)
x=2;
else if (c==3)
x=0;
       
  
          

        m.position.x = 250;
        m.position.y = 20;
       SDL_BlitSurface(m.texte, NULL, m.ecran, &(m.position)); 
        
         m.positionquit.x = 200;
        m.positionquit.y = 400;
        SDL_BlitSurface(m.quit, NULL, m.ecran, &(m.positionquit));
 m.positionops.x = 200;
        m.positionops.y = 250;
        SDL_BlitSurface(m.ops, NULL, m.ecran, &(m.positionops));
 m.positionnew.x = 200;
        m.positionnew.y = 100;
       SDL_BlitSurface(m.new, NULL, m.ecran, &(m.positionnew));
       

       
        if(x==0)
     {
     SDL_BlitSurface(m.quit1,NULL,m.ecran,&(m.positionquit));
     }   
     else if(x==1)
     {
     SDL_BlitSurface(m.new1,NULL,m.ecran,&(m.positionnew));

     }   
     else if(x==2)
     {
    SDL_BlitSurface(m.ops1,NULL,m.ecran,&(m.positionops));

    }    
      x=5; 
      
      
        if(y==1)
        {
            jeu(m,couleurNoire , color,event);
        
      if(d==1)
     {m.position.x = 0;
        m.position.y = 0;
      SDL_BlitSurface(m.retur1,NULL,m.ecran,&(m.position));}
      
      
        } else if(y==2)
       {option(m, couleurNoire ,color, event);
 if(d==1)
    {m.position.x = 0;
        m.position.y = 0;
      SDL_BlitSurface(m.retur1,NULL,m.ecran,&(m.position));}
      if (f==0)
      {m.position.x = 100;
        m.position.y = 200;
        SDL_BlitSurface(m.z1, NULL, m.ecran, &(m.position)); 
      }
      if (f==1)
      {
     m.position.x = 230;
        m.position.y = 200;
        SDL_BlitSurface(m.x1, NULL, m.ecran, &(m.position)); 
      }
      if (f==2)
      {
      m.position.x = 360;
        m.position.y = 200;
        SDL_BlitSurface(m.h1, NULL, m.ecran, &(m.position));
      }
      if (f==3)
      {
       
 m.position.x = 490;
        m.position.y = 200;
        SDL_BlitSurface(m.j1, NULL, m.ecran, &(m.position)); 
      }}
d=0; 
f=5;  
   
 
        SDL_Flip(m.ecran);

   
}
    }
void freedom(menu m)
{
 TTF_CloseFont(m.police);
TTF_CloseFont(m.police1);

    TTF_Quit();
    
SDL_FreeSurface(m.ops);
SDL_FreeSurface(m.ops1);
SDL_FreeSurface(m.new1);
SDL_FreeSurface(m.texte);
SDL_FreeSurface(m.fond);
    SDL_FreeSurface(m.sound);
    SDL_FreeSurface(m.record);
  Mix_FreeMusic(m.music);  
SDL_FreeSurface(m.quit);
SDL_FreeSurface(m.quit1);
SDL_FreeSurface(m.new);

    SDL_Quit();
}    


