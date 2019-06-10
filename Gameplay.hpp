/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Gameplay specification file.
 *******************************************************************************/

#ifndef Gameplay_hpp
#define Gameplay_hpp
#include "Insects.hpp"
#include "Wolves.hpp"
#include "Forest.hpp"
#include "River.hpp"
#include "Snakes.hpp"

class Gameplay {
private:
    Character *c;
    
public:
    Gameplay();
    Character *getCharacter();
    void run(Character *);
};
#endif /* Gameplay_hpp */
