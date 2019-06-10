/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  River class specification file for the five River spaces.
 *******************************************************************************/

#ifndef River_hpp
#define River_hpp
#include "Space.hpp"

class River: public Space {
public:
    void lookAround();
    void interact();
};

#endif /* River_hpp */
