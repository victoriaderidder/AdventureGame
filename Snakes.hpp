/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Snakes class specification file.
 *******************************************************************************/

#ifndef Snakes_hpp
#define Snakes_hpp

#include "Space.hpp"

class Snakes: public Space {
public:
    void lookAround();
    void interact();
};

#endif /* Snakes_hpp */
