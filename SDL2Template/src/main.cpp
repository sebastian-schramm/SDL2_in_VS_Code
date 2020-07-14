#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "RenderWindow.h"

int main(int arg, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
        std::cout << "SDL_Init has failed: SDL_ERROR" << SDL_GetError() << std::endl;

    if (!IMG_Init(IMG_INIT_PNG))
        std::cout << "IMG_Init has failed: SDL_ERROR" << SDL_GetError() << std::endl;

    RenderWindow window("Game v1.0", 400, 400);

    bool gameRunning = true;

    SDL_Event e;

    while (gameRunning) {
        /* code */
        while (SDL_PollEvent(&e)) {
            if(e.type == SDL_QUIT)
                gameRunning = false;
            /* code */
        }
        

    }
    
    window.cleanUp();
    SDL_Quit();

    SDL_Log("Successful quit");

    return 0;
}