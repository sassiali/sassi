#ifndef FONCTIONS_H_
#define FONCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

SDL_Color GetPixel(SDL_Surface *background_mask,int x,int y);
int detectCollPP (SDL_Surface * BackgroundMasque, SDL_Rect Personnage);



#endif /* FONCTIONS_H_ */
