#include "time.h"

void  chargerImage(char* imagetemps)
{
    SDL_Surface* image;

    image = IMG_Load(imagetemps);
    if (!image) {
        printf("Failed to load \"%s\"\n", imagetemps);
        printf("IMG_Load: %s\n", IMG_GetError());
    }

   
}
   

void startTimer(Temps* t)
{
    t->isStarted = 1;
    t->isPaused = 0;
    t->startTime = SDL_GetTicks();
    t->pausedTime = 0;
}

void stopTimer(Temps* t)
{
    t->isStarted = 0;
    t->isPaused = 0;
    t->startTime = 0;
    t->pausedTime = 0;
}

void pauseTimer(Temps* t)
{
    if (t->isStarted && !t->isPaused) {
        t->isPaused = 1;

        t->pausedTime = SDL_GetTicks() - t->startTime;
        t->startTime = 0;
    }
}

void continueTimer(Temps* t)
{
    if (t->isStarted && t->isPaused) {
        t->isPaused = 0;
        t->startTime = SDL_GetTicks() - t->pausedTime;
        t->pausedTime = 0;
    }
}


