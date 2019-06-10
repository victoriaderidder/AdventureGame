/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Insects class specification file.
 *******************************************************************************/

#ifndef Insects_hpp
#define Insects_hpp
#include "Space.hpp"

class Insects: public Space {
public:
    void lookAround();
    void interact();
};

#endif /* Insects_hpp */
