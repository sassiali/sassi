#ifndef time_H
#define time_H
#include <SDL/SDL_image.h>
#include <stdbool.h>
typedef struct
{int isStarted ;
 int isPaused ;
 int startTime ;
 int pausedTime ;
 SDL_Surface image;
}Temps;



SDL_Surface* chargerImage(char* imagetemps);
void  chargerImage(char* imagetemps)
void startTimer(Temps* t);
void stopTimer(Temps* t);
void continueTimer(Temps* t);




#endif

