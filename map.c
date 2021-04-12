#include "map.h"


void initminimap( minimap * m,perso p)
{
m->positionminimap.x=0;
m->positionminimap.y=20;
m->miniature=IMG_Load("minimap/1.png");


//rajouter init imgminiperso perso+posminiperso
};
void initminiperso( miniperso * m,perso p)
{
m->positionminiperso.x=0;
m->positionminiperso.y=50;
m->miniperso=IMG_Load("miniperso.png");
};
void afficherminimap (minimap m, SDL_Surface * screen)
{
SDL_BlitSurface(m->miniature,NULL,screen,&m->positionminimap);


SDL_BlitSurface(m->miniperso,NULL,screen,&m->positionminiperso);
}

void MAJMinimapb (minimap * m,perso p);
{ SDL_RECT posA;
posA.x=p->posperso.x +b->camera.x;
posA.y=p->posperso.y +b->camera.y;
posminiperso.x=posA.x * 0.3;
posminiperso.y=posA.y * 0.3;
}




