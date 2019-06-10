/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Insects class implementation file.
 *******************************************************************************/

#include "Insects.hpp"
#include "Character.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Functions for the Insects space.
 ******************************************************************************/
void Insects::lookAround() {
    std::cout << "This is it!" << std::endl;
    std::cout << "You can see the way out!" << std::endl;
    std::cout << "Unfortunately, your way is blocked by a huge swarm of insects..." << std::endl;
}

void Insects::interact() {
    if (this->character->getHasStick() == true) {
        std::cout << "You can probably fight your way through." << std::endl;
        std::cout << "You swing your stick wildly, beating insects left and right." << std::endl;
        std::cout << "(Ew, bug guts everywhere.)" << std::endl;
        std::cout << "But it's worth it! You make it through the swarm!" << std::endl;
        std::cout << "You did it!" << std::endl;
        std::cout << "You stumble out of the forest and make your way to the gas station across the road, "
        "vowing never to go camping again." << std::endl;
        exit(0);
    }
    else {
        std::cout << "There's no way through this swarm without a stick." << std::endl;
        std::cout << "You better go find one." << std::endl;
    }
}
