/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Space class implementation file.
 *******************************************************************************/

#include <iostream>
#include "Space.hpp"


void Space::setLocation(Space *w, Space *s, Space *a, Space *d, Character *c) {
    this->forward = w;
    this->back = s;
    this->left = a;
    this->right = d;
    this->character = c;
}

void Space::setVisited() {
    if (visited == true) {
        std::cout << "This area looks familiar...almost like you've been here before." << std::endl;
        std::cout << "Wait, are you getting even more lost?" << std::endl;
        beenHereBefore++;
    }
    else {
        visited = true;
        beenHereBefore++;
    }
    if (beenHereBefore >= 3) {
        std::cout << "You've been here so many times!" << std::endl;
        std::cout << "You are hopelessly lost in this forest." << std::endl;
        std::cout << "You eventually pass out from exhaustion." << std::endl;
        std::cout << "You never wake up." << std::endl;
        std::cout << "Game over!" << std::endl;
        exit(0);
    }
}

/******************************************************************************
 ** Description: We only need the if/else capability here because left is the
 **              only direction that can be NULL.
 ******************************************************************************/
Space *Space::getLeft() {
    if (this->left == NULL)
        return NULL;
    else
        return this->left;
}

Space *Space::getRight() {
    return this->right;
}

Space *Space::getUp() {
    return this->forward;
}

Space *Space::getDown() {
    return this->back;
}
