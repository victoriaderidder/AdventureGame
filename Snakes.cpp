/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Snakes class implementation file.
 *******************************************************************************/

#include "Snakes.hpp"
#include "inputValidation.hpp"
#include "Character.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Functions for the Snakes style space.
 ******************************************************************************/
void Snakes::lookAround() {
    std::cout << "You take a step forward and freeze." << std::endl;
    std::cout << "You’re face to face with a large python, and he definitely sees you too." << std::endl;
    std::cout << "Why'd it have to be snakes?" << std::endl;
    std::cout << "There's a river to your left and forest on all other sides, "
    "but is that really important right now?\n" << std::endl;
    std::cout << "1. Fight!" << std::endl;
    std::cout << "2. Run!" << std::endl;
    int choice = intCheck();
    while (choice != 1 && choice != 2) {
        // input validation
        std::cout << "That is not a valid input. Please try again." << std::endl;
        choice = intCheck();
    }
    if (choice == 1) {
        if (this->character->getHasStick() == true) {
            int val = (rand()%100 +1);
            if (val > 75) {
                std::cout << "You relentlessly beat the python with your stick!" << std::endl;
                std::cout << "The python eats the stick." << std::endl;
                std::cout << "And then eats you." << std::endl;
                std::cout << "Game over!" << std::endl;
                exit(0);
            }
            else {
                std::cout << "You relentlessly beat the python with your stick!" << std::endl;
                std::cout << "You manage to poke him in the eye!" << std::endl;
                std::cout << "While he's temporarily blinded, you run for it." << std::endl;
                std::cout << "You're safe!" << std::endl;
            }
        }
        else {
            std::cout << "You're going to fight with what, your bare hands?" << std::endl;
            std::cout << "You punch the python in the face." << std::endl;
            std::cout << "That doesn't stop him from eating you." << std::endl;
            std::cout << "Game over!" << std::endl;
            exit(0);
        }
    }
    else if (choice == 2) {
        if (this->character->getHasCoin() == true) {
            std::cout << "You flash your coin in the python's face!" << std::endl;
            std::cout << "While he's temporarily blinded, you run for it." << std::endl;
            std::cout << "You're safe!" << std::endl;
        }
        else {
            int val = (rand()%100 +1);
            if (val > 25) {
                std::cout << "You run for your life!" << std::endl;
                std::cout << "You're fast, but the python is faster." << std::endl;
                std::cout << "Game over!" << std::endl;
                exit(0);
            }
            else {
                std::cout << "You run for your life!" << std::endl;
                std::cout << "The python is pretty fast, but all your zigging and zagging "
                "tangles him up in knots." << std::endl;
                std::cout << "You escape!" << std::endl;
            }
        }
    }
}

void Snakes::interact() {
    lookAround();
}
