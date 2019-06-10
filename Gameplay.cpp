/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Gameplay implementation file.
 *******************************************************************************/

#include "Gameplay.hpp"
#include "Space.hpp"
#include "inputValidation.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Constructor sets up the game.
 ******************************************************************************/
Gameplay::Gameplay() {
    // Create the objects for the board.
    Start *start = new Start();
    Forest1 *forest1 = new Forest1();
    Forest2 *forest2 = new Forest2();
    Forest3 *forest3 = new Forest3();
    Forest4 *forest4 = new Forest4();
    Forest5 *forest5 = new Forest5();
    Forest6 *forest6 = new Forest6();
    Forest7 *forest7 = new Forest7();
    Forest8 *forest8 = new Forest8();
    Forest9 *forest9 = new Forest9();
    Forest10 *forest10 = new Forest10();
    Forest11 *forest11 = new Forest11();
    River *river1 = new River();
    River *river2 = new River();
    River *river3 = new River();
    River *river4 = new River();
    River *river5 = new River();
    Wolves *wolves = new Wolves();
    Snakes *snakes = new Snakes();
    Insects *insects = new Insects();
    
    // Create the board.
    // To give the illusion of a full forest, this board wraps quite a bit.
    // This makes it difficult to find the exit.
    // The river does not wrap horizontally and is a firm border on the left.
    // No map for the player, but I created and referenced my own map to make this layout.
    this->c = new Character();
    river1->setLocation(river5, river2, NULL, forest1, c);
    river2->setLocation(river1, river3, NULL, start, c);
    river3->setLocation(river2, river4, NULL, forest4, c);
    river4->setLocation(river3, river5, NULL, snakes, c);
    river5->setLocation(river4, river1, NULL, forest6, c);
    start->setLocation(forest1, forest4, river2, forest2, c);
    forest1->setLocation(forest6, start, river1, forest10, c);
    forest2->setLocation(forest10, forest8, start, forest3, c);
    forest3->setLocation(wolves, forest11, forest2, start, c);
    forest4->setLocation(start, snakes, river3, forest8, c);
    forest5->setLocation(insects, wolves, forest7, forest6, c);
    forest6->setLocation(snakes, forest1, river5, forest7, c);
    forest7->setLocation(forest9, forest10, forest6, forest5, c);
    forest8->setLocation(forest2, forest9, forest4, forest11, c);
    forest9->setLocation(forest8, forest7, snakes, insects, c);
    forest10->setLocation(forest7, forest2, forest1, wolves, c);
    forest11->setLocation(forest3, insects, forest8, forest4, c);
    wolves->setLocation(forest5, forest3, forest10, forest1, c);
    snakes->setLocation(forest4, forest6, river4, forest9, c);
    insects->setLocation(forest11, forest5, forest9, snakes, c);
    
    // Set the starting space.
    this->c->setSpace(start);
}

/******************************************************************************
 ** Description: Get the character.
 ******************************************************************************/
Character *Gameplay::getCharacter() {
    return this->c;
}

/******************************************************************************
 ** Description: Runs the game.
 ******************************************************************************/
void Gameplay::run(Character *c) {
    // Game loop.
    // TIME LIMIT: Game ends when user has visited the same space three times, because
    // they are clearly hopelessly lost in the forest!
    bool gameLoop = true;
    c->getSpace()->setVisited();
    do {
        std::cout << "\nWhat would you like to do?" << std::endl;
        std::cout << "1. Look around" << std::endl;
        std::cout << "2. Interact with the area" << std::endl;
        std::cout << "3. Move" << std::endl;
        int userInput = intCheck();
        while (userInput < 1 || userInput > 3) {
            // input validation
            std::cout << "That is not a valid input. Please try again." << std::endl;
            userInput = intCheck();
        }
        if (userInput == 1) {
            c->getSpace()->lookAround();
        }
        else if (userInput == 2) {
            c->getSpace()->interact();
        }
        else {
            // move menu
            std::cout << "1. Move up" << std::endl;
            std::cout << "2. Move left" << std::endl;
            std::cout << "3. Move down" << std::endl;
            std::cout << "4. Move right" << std::endl;
            userInput = intCheck();
            while (userInput < 1 || userInput > 4) {
                // input validation
                std::cout << "That is not a valid input. Please try again." << std::endl;
                userInput = intCheck();
            }
            if (userInput == 1) {
                c->moveUp();
                c->getSpace()->setVisited();
            }
            else if (userInput == 2) {
                c->moveLeft();
                c->getSpace()->setVisited();
            }
            else if (userInput == 3) {
                c->moveDown();
                c->getSpace()->setVisited();
            }
            else {
                c->moveRight();
                c->getSpace()->setVisited();
            }
        }
    } while (gameLoop == true);
}
