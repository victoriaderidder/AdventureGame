/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Wolves class implementation file.
 *******************************************************************************/

#include "Wolves.hpp"
#include "inputValidation.hpp"
#include "Character.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Functions for the Wolves space, which is likely to kill you.
 ******************************************************************************/
void Wolves::lookAround() {
    std::cout << "You’ve been trying to ignore the howling in the distance for some time now." << std::endl;
    std::cout << "But that was before you found yourself surrounded by glowing yellow eyes." << std::endl;
    std::cout << "You are completely surrounded by forest, but is that really important "
    "right now?" << std::endl;
    std::cout << "1. Fight for your life" << std::endl;
    std::cout << "2. Try to run" << std::endl;
    std::cout << "3. Give up and die" << std::endl;
    int userInput = intCheck();
    while (userInput < 1 || userInput > 3) {
        // input validation
        std::cout << "That is not a valid input. Please try again." << std::endl;
        userInput = intCheck();
    }
    if (userInput == 1) {
        // fight!!!
        if (this->character->getHasStick() == true) {
            int val = (rand()%100 +1);
            if (val < 80) {
                std::cout << "You relentlessly beat the wolves with your stick!" << std::endl;
                std::cout << "But, uh, they're wolves." << std::endl;
                std::cout << "The leader rips your stick away!" << std::endl;
                std::cout << "Then he rips your throat away." << std::endl;
                std::cout << "Game over!" << std::endl;
                exit(0);
            }
            else {
                std::cout << "You relentlessly beat the wolves with your stick!" << std::endl;
                std::cout << "You manage to catch the leader in the nose." << std::endl;
                std::cout << "He begins howling in pain and runs away!" << std::endl;
                std::cout << "The rest of the pack follows him..." << std::endl;
                std::cout << "You're safe!" << std::endl;
            }
        }
        else {
            std::cout << "You're going to fight with what, your bare hands?" << std::endl;
            std::cout << "You punch the lead wolf in the face." << std::endl;
            std::cout << "He eats you." << std::endl;
            std::cout << "Game over!" << std::endl;
            exit(0);
        }
    }
    else if (userInput == 2) {
        // run!!!
        std::cout << "Are you kidding me? You think you can outrun a wolf pack?" << std::endl;
        std::cout << "You try it anyway." << std::endl;
        std::cout << "You make it about six inches before the lead wolf lunges at you." << std::endl;
        std::cout << "You try to defend yourself, but that's hard to do when you"
        " no longer have limbs." << std::endl;
        std::cout << "Game over!" << std::endl;
        exit(0);
    }
    else {
        // just die I guess
        std::cout << "You throw yourself to the ground!" << std::endl;
        std::cout << "The wolves sniff you. You lie as still as possible..." << std::endl;
        std::cout << "...and they eventually walk away." << std::endl;
        std::cout << "Could it be that being craven has its advantages?" << std::endl;
        std::cout << "You get up and carry on." << std::endl;
    }
}

void Wolves::interact() {
    lookAround();
}
