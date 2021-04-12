

typedef struct 
{
SDL_Surface *miniature;
SDL_Rect positionminimap;
SDL_Surface *img;
SDL_Rect camera;
SDL_Rect posminiperso;

}minimap ; 
typedef struct 
{
SDL_Surface *miniperso;
SDL_Rect positionminiperso;
SDL_Surface *img;
SDL_Rect camera;
SDL_Rect posminiperso;

}miniperso ;
typedef struct 
{
SDL_Surface *perso;
SDL_Rect positionperso;
SDL_Surface *img;
SDL_Rect camera;
SDL_Rect posperso;

}perso ;



void initminimap( minimap * m);
void initminiperso( miniperso * m,perso p);
void afficherminimap (minimap m, SDL_Surface * screen);
void MAJMinimapb (minimap * m,perso p);



