/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  The River runs along the left hand side of the board. You
 **               can't cross it.
 *******************************************************************************/

#include "River.hpp"
#include "inputValidation.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Functions for the River style space.
 ******************************************************************************/
void River::lookAround() {
    std::cout << "You hear water rushing in the distance." << std::endl;
    std::cout << "You approach it and find yourself standing at the bank"
    " of a large, roaring river." << std::endl;
    std::cout << "It would be impossible to cross or to follow, but you’re desperately thirsty." << std::endl;
    std::cout << "(It looks like this river runs all the way along this edge of the forest.)" << std::endl;
}

void River::interact() {
    std::cout << "You’re really supposed to boil water before you drink it." << std::endl;
    std::cout << "Haven’t you ever played Oregon Trail? Dude, you’re gonna die of dysentery." << std::endl;
    std::cout << "1. I don't care, I'm thirsty." << std::endl;
    std::cout << "2. Never mind..." << std::endl;
    int choice = intCheck();
    while (choice != 1 && choice != 2) {
        // input validation
        std::cout << "That is not a valid input. Please try again." << std::endl;
        choice = intCheck();
    }
    if (choice == 1) {
        int val = (rand()%100 +1);
        if (val < 30) {
            std::cout << "I told you not to drink the water." << std::endl;
            std::cout << "You contract a nasty infection and die instantly." << std::endl;
            std::cout << "Game over!" << std::endl;
            exit(0);
        }
        else {
            std::cout << "The water is gross, but you survive." << std::endl;
        }
    }
    else
        std::cout << "Probably a wise decision." << std::endl;
}
