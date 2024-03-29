#include "Robot.h"
#include "Player.h"
#include "Arena.h"
#include "Game.h"
#include "Previous.h"
#include "globals.h"

int main()
{
    // Initialize the random number generator. (You don't need to
    // understand how this works.)
    srand(static_cast<unsigned int>(time(0)));
    // Create a game
    // Use this instead to create a mini-game: Game g(3, 3, 2);
    Game g(15, 18, 80);
    // Play the game
    g.play();
    return 0;
}

