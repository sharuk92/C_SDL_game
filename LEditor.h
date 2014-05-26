#ifndef LEVEL_EDITOR
#define LEVEL_EDITOR

#include <string.h>
#include "Constants.h"
#include "Structs.h"
#include "SDL/SDL.h"
#include <iostream>

class LEditor
{
	public:
	
	void init();
	LEditor(const char* title);
   ~LEditor();
	void init(const char* title);
   void getInput();
   void draw();
   bool isRunning();
   void update();
	

	private:

	std::string title;
	SDL_Surface* screen;
	SDL_Surface* background;
   SDL_Surface* tileSet;
   Input input;
   int maxX, maxY;
   int tile[MAX_MAP_Y][MAX_MAP_X];
   bool running;
   int startX, startY;

   void drawImage(SDL_Surface* image, int x, int y);
   void loadMap(const char* path);
   void drawTile(SDL_Surface* image, int destX, int destY, int scrX, int srcY);
   void drawMap(void);
   SDL_Surface* loadImage(const char* path);


};



#endif
