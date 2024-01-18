//
//  Robot.hpp
//  Project 1
//
//  Created by Ava Gonick on 6/29/23.
//

#ifndef Robot_h
#define Robot_h

class Arena;  // This is needed to let the compiler know that Arena is a
              // type name, since it's mentioned in the Robot declaration.

class Robot
{
  public:
        // Constructor
    Robot(Arena* ap, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool takeDamageAndLive();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};



#endif /* Robot_h */
