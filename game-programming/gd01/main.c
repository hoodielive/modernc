#include "SDL.h"
#include <stdio.h>

typedef struct
{
	int x, y;
	short life;
	char *name;
} Man;

int processEvents(SDL_Window *window)
{
	int done = 0;
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_WINDOWEVENT_CLOSE:
		{
			if (window)
			{
				SDL_DestroyWindow(window);
				window = NULL;
			}
		}
		break;
		case SDL_KEYDOWN:
		{
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				done = 1;
				break;
			}
		}
		break;
		case SDL_QUIT:
		{
			// quit of the game.
			done = 1;
			break;
		}
		}
	}
	return done;
}

void doRender(SDL_Renderer *renderer)
{
	// Set the drawing color to blue.
	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	// Clear the screen (to blue).
	SDL_RenderClear(renderer);

	// Set the drawing color to white.
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

	SDL_Rect rect = {200, 140, 200, 200};
	SDL_RenderFillRect(renderer, &rect);

	// We are done drawing, "present" or show to the screen what we've drawn.
	SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
	SDL_Window *window;			/* Declare a window */
	SDL_Renderer *renderer; /* Declare a renderer */

	SDL_Init(SDL_INIT_VIDEO); /* Initialize SDL2 */

	// Create an app window with the following settings:
	window = SDL_CreateWindow("Game Window",
														SDL_WINDOWPOS_UNDEFINED,
														SDL_WINDOWPOS_UNDEFINED,
														640,
														480,
														0);

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	// The window is open: enter program loop (see SDL_PollEvent).
	int done = 0;

	// Event Loop.
	while (!done)
	{
		// Check for events.
		if (processEvents(window) == 1)
			done = 1;

		// Render display.
		doRender(renderer);

		// Wait a few seconds before quitting.
		SDL_Delay(2000);

		// Close and destroy the window.
		SDL_DestroyWindow(window);

		SDL_DestroyRenderer(renderer);

		// Clean up.
		SDL_Quit();
	}

	return 0;
}
