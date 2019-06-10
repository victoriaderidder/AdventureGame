/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Character class implementation file.
 *******************************************************************************/

#include "Character.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Constructor sets hasStick and hasCoin to false.
 ******************************************************************************/
Character::Character() {
    this->hasCoin = false;
    this->hasStick = false;
}

/******************************************************************************
 ** Description: Sets the current Space.
 ******************************************************************************/
void Character::setSpace(Space *s) {
    this->currentSpace = s;
}

/******************************************************************************
 ** Description: Gets the current Space.
 ******************************************************************************/
Space *Character::getSpace() {
    return this->currentSpace;
}

/******************************************************************************
 ** Description: Does user have the stick? Sets stick status.
 ******************************************************************************/
void Character::setHasStick(bool s) {
    this->hasStick = s;
}
/******************************************************************************
 ** Description: Returns stick status.
 ******************************************************************************/
bool Character::getHasStick() {
    return this->hasStick;
}

/******************************************************************************
 ** Description: Does user have the coin? Sets coin status.
 ******************************************************************************/
void Character::setHasCoin(bool c) {
    this->hasCoin = c;
}

/******************************************************************************
 ** Description: Returns coin status
 ******************************************************************************/
bool Character::getHasCoin() {
    return this->hasCoin;
}

/******************************************************************************
 ** Description: Logic for moving up.
 ******************************************************************************/
void Character::moveUp() {
    this->currentSpace = currentSpace->getUp();
    std::cout << "You went up." << std::endl;
}

/******************************************************************************
 ** Description: Logic for moving down.
 ******************************************************************************/
void Character::moveDown() {
    this->currentSpace = currentSpace->getDown();
    std::cout << "You went down." << std::endl;
}

/******************************************************************************
 ** Description: Logic for moving left.
 ******************************************************************************/
void Character::moveLeft() {
    if (currentSpace->getLeft() == NULL) {
        std::cout << "What part of 'You can't cross the river' didn't you understand?" << std::endl;
        std::cout << "You'll have to go a different direction." << std::endl;
    }
    else {
        this->currentSpace = currentSpace ->getLeft();
        std::cout << "You turned left." << std::endl;
    }
}

/******************************************************************************
 ** Description: Logic for moving right.
 ******************************************************************************/
void Character::moveRight() {
    this->currentSpace = currentSpace->getRight();
    std::cout << "You turned right." << std::endl;
}
