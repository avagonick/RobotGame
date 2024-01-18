//
//  Game.h
//  Project 1
//
//  Created by Ava Gonick on 6/29/23.
//

#ifndef Game_h
#define Game_h
class Arena;
class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();

        // Mutators
    void play();

  private:
    Arena* m_arena;
};

#endif /* Game_h */
