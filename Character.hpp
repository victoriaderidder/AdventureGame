/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Character class specification file.
 *******************************************************************************/

#ifndef Character_hpp
#define Character_hpp
#include <string>
#include "Space.hpp"

class Character {
protected:
    bool hasCoin = false, hasStick = false;
    Space *currentSpace;
    
public:
    Character();
    void setSpace(Space*);
    Space *getSpace();
    void setHasStick(bool);
    bool getHasStick();
    void setHasCoin(bool);
    bool getHasCoin();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};

#endif /* Character_hpp */
