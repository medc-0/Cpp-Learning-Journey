#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <cmath>

int main(int argc, char* argv[]) {

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow(
        "SDL2 Kreis",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600,
        // 0
    );

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool running = true;
    SDL_Event event;

    int cx = 400;
    int cy = 300;
    int radius = 50;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_KEYDOWN) 
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP:
                        radius += 5;
                        break;
                }
            }
            if (event.type == SDL_QUIT)
                running = false;
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

        for (int w = -radius; w <= radius; w++) {
            for (int h = -radius; h <= radius; h++) {
                if (w*w + h*h <= radius*radius) {
                    SDL_RenderDrawPoint(renderer, cx + w, cy + h);
                }
            }
        }

        SDL_RenderPresent(renderer);
        SDL_Delay(10);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}