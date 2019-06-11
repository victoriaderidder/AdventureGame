/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Implementation file for the 11 Forest style spaces. Nothing
 **               much happens on these spaces. Occasionally you can pick up
 **               a useful item, receive a directional hint, or take a risk
 **               that may or may not kill your character.
 *******************************************************************************/

#include "Forest.hpp"
#include "inputValidation.hpp"
#include "Character.hpp"
#include <iostream>

/******************************************************************************
 ** Description: Functions for the Start space.
 ******************************************************************************/
void Start::lookAround() {
    std::cout << "Wait...aren't you right back where you started?" << std::endl;
    std::cout << "There's a river to your left and forest on all other sides." << std::endl;
}

void Start::interact() {
    std::cout << "This is definitely your starting space." << std::endl;
    std::cout << "You can tell because there are a lot of trees." << std::endl;
    std::cout << "Oh wait." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the first Forest style space.
 ******************************************************************************/
void Forest1::lookAround() {
    std::cout << "There's a river to your left and forest on all other sides." << std::endl;
    std::cout << "You see a lot of trees, and a large branch lying on the ground." << std::endl;
    std::cout << "That could be useful later." << std::endl;
}

void Forest1::interact() {
    // pick up a very useful stick (snakes; wolves; insects). needed to escape.
    if (!this->character->getHasStick()) {
        this->character->setHasStick(true);
        std::cout << "You pick up the branch. It’s pretty heavy." << std::endl;
    }
    else
        std::cout << "You don't need two sticks." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the second Forest style space.
 ******************************************************************************/
void Forest2::lookAround() {
    std::cout << "You are completely surrounded by forest." << std::endl;
    std::cout << "You see more trees." << std::endl;
    std::cout << "You look up to try to get your bearings, but the sky is only "
    "barely visible through the leaves." << std::endl;
}

void Forest2::interact() {
    std::cout << "There's literally nothing here." << std::endl;
    if (this->character->getHasStick() == true) {
        // an evil trap
        std::cout << "Your stick is getting pretty heavy, though." << std::endl;
        std::cout << "Put it down?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        int choice = intCheck();
        while (choice != 1 && choice != 2) {
            // input validation
            std::cout << "That is not a valid input. Please try again." << std::endl;
            choice = intCheck();
        }
        if (choice == 1)
            this->character->setHasStick(false);
    }
}

/******************************************************************************
 ** Description: Functions for the third Forest style space.
 ******************************************************************************/
void Forest3::lookAround() {
    std::cout << "You are completely surrounded by forest." << std::endl;
    std::cout << "Mushrooms! You see mushrooms! You are so hungry." << std::endl;
}

void Forest3::interact() {
    std::cout << "You don’t remember whether or not these mushrooms are edible." << std::endl;
    std::cout << "1. Eat them anyway." << std::endl;
    std::cout << "2. Keep walking." << std::endl;
    int choice = intCheck();
    while (choice != 1 && choice != 2) {
        // input validation
        std::cout << "That is not a valid input. Please try again." << std::endl;
        choice = intCheck();
    }
    if (choice == 1) {
        // user chooses to eat the mushrooms
        int val = (rand()%100 +1);
        if (val <= 50)
            std::cout << "The mushrooms turned out to be both edible and quite tasty!" << std::endl;
        else {
            std::cout << "Bad news...the mushrooms were poisonous." << std::endl;
            std::cout << "You took one bite and died instantly." << std::endl;
            std::cout << "If it's any consolation, you felt very little pain, and "
            "your family will find your body eventually." << std::endl;
            std::cout << "Game over!" << std::endl;
            exit(0);
        }
    }
    else if (choice == 2) {
        // user chooses not to eat the mushrooms
        std::cout << "Probably a wise decision." << std::endl;
    }
}

/******************************************************************************
 ** Description: Functions for the fourth Forest style space.
 ******************************************************************************/
void Forest4::lookAround() {
    std::cout << "Oh boy, more trees." << std::endl;
    std::cout << "There's a river to your left and forest on all other sides." << std::endl;
}
void Forest4::interact() {
    // pick up a potentially useful coin (snakes)
    std::cout << "You spot a shiny coin lying on the forest floor." << std::endl;
    std::cout << "You can pick it up if you want." << std::endl;
    std::cout << "1. Yes" << std::endl;
    std::cout << "2. No" << std::endl;
    int choice = intCheck();
    while (choice != 1 && choice != 2) {
        // input validation
        std::cout << "That is not a valid input. Please try again." << std::endl;
        choice = intCheck();
    }
    if (choice == 1) {
        this->character->setHasCoin(true);
    }
}

/******************************************************************************
 ** Description: Functions for the fifth Forest style space.
 ******************************************************************************/
void Forest5::lookAround() {
    std::cout << "Trees. Trees. Trees." << std::endl;
    std::cout << "You are completely surrounded by forest." << std::endl;
}

void Forest5::interact() {
    // pick up a very useful stick (snakes; wolves; insects). needed to escape.
    if (!this->character->getHasStick()) {
        this->character->setHasStick(true);
        std::cout << "Oh look, a stick. You should probably pick that up." << std::endl;
    }
    else
        std::cout << "There's literally nothing here." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the sixth Forest style space.
 ******************************************************************************/
void Forest6::lookAround() {
    std::cout << "There's a river to your left and forest on all other sides." << std::endl;
    std::cout << "You really wish you were at home playing video games." << std::endl;
    std::cout << "Why did you agree to go camping anyway?" << std::endl;
}

void Forest6::interact() {
    std::cout << "You kick a tree." << std::endl;
    std::cout << "It doesn't help you get out of here, but it does make you feel better." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the seventh Forest style space.
 ******************************************************************************/
void Forest7::lookAround() {
    std::cout << "You are completely surrounded by forest." << std::endl;
    std::cout << "You try to look around, but it’s getting really dark." << std::endl;
    std::cout << "You start brushing against trees to guide you." << std::endl;
}

void Forest7::interact() {
    std::cout << "You trip over a log and slice your hand open on a sharp piece of bark." << std::endl;
    std::cout << "Great." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the eighth Forest style space.
 ******************************************************************************/
void Forest8::lookAround() {
    std::cout << "You are completely surrounded by forest." << std::endl;
    std::cout << "You stumble into a small empty campsite." << std::endl;
    std::cout << "There’s smoke coming from the fire pit, "
    "indicating someone was here recently." << std::endl;
    std::cout << "You see a makeshift trail leading away from the campsite." << std::endl;
}

void Forest8::interact() {
    // a helpful hint
    std::cout << "If you want to follow the trail, you should go DOWN." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the ninth Forest style space.
 ******************************************************************************/
void Forest9::lookAround() {
    std::cout << "You are completely surrounded by forest." << std::endl;
    std::cout << "You see a scrap of fabric tied to a tree just ahead." << std::endl;
    std::cout << "You realize you recognize it!" << std::endl;
    std::cout << "One of your friends put it there on your way into the forest." << std::endl;
}

void Forest9::interact() {
    // a helpful hint
    std::cout << "If you want to follow the fabric, you should go RIGHT." << std::endl;
}

/******************************************************************************
 ** Description: Functions for the tenth Forest style space.
 ******************************************************************************/
void Forest10::lookAround() {
    std::cout << "You are completely surrounded by forest." << std::endl;
    std::cout << "You hear howling in the distance." << std::endl;
}

void Forest10::interact() {
    if (this->character->getHasStick() == true) {
         std::cout << "You clutch your heavy stick close to your chest, "
         "glad you didn't lose it along the way." << std::endl;
    }
    else {
         std::cout << "You see a large branch lying on the ground." << std::endl;
         std::cout << "You don't like the sound of that howling. Better pick it up." << std::endl;
         this->character->setHasStick(true);
    }
}

/******************************************************************************
 ** Description: Functions for the eleventh Forest style space.
 ******************************************************************************/
void Forest11::lookAround() {
    std::cout << "Trees. Trees. Trees." << std::endl;
    std::cout << "You are completely surrounded by forest." << std::endl;
}

void Forest11::interact() {
    // pick up a very useful stick (snakes; wolves; insects). needed to escape.
    if (!this->character->getHasStick()) {
        this->character->setHasStick(true);
        std::cout << "Oh look, a stick. You should probably pick that up." << std::endl;
    }
    else
        std::cout << "There's literally nothing here." << std::endl;
}
