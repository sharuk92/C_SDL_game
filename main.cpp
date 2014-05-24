#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    Game game("betterImplementation");

    while(game.isRunning())
    {
        game.getInput();
        game.draw();        game.update();

    }


    return 0;
}
