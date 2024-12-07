#include <stdio.h>
#include "common.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Video Initialization Error, %s", SDL_GetError());
        return 1;
    }
    else
    {
        window = SDL_CreateWindow("Project Canvas", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            printf("Window Creation Error, %s", SDL_GetError());
        }
        else
        {
            SDL_UpdateWindowSurface(window);
            SDL_Delay(20000);
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}