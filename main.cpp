/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Runs the program.
 *******************************************************************************/

#include <iostream>
#include "Character.hpp"
#include "Gameplay.hpp"

int main() {
    srand(time(NULL));
    std::cout << "You are lost in the forest. It's starting to get dark..." << std::endl;
    std::cout << "Can you find your way out?" << std::endl;
    Gameplay *gp = new Gameplay();
    Character *c = gp->getCharacter();
    gp->run(c);
    return 0;
}
