/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Wolves class specification file.
 *******************************************************************************/

#ifndef Wolves_hpp
#define Wolves_hpp

#include "Space.hpp"
#include "Character.hpp"

class Wolves: public Space {
private:
    Character c;
public:
    void lookAround();
    void interact();
};

#endif /* Wolves_hpp */
