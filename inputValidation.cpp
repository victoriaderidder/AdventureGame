/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/9/2019
 ** Description:  Input validation implementation file.
 *******************************************************************************/

#include "inputValidation.hpp"
#include <string>
#include <iostream>
#include <algorithm>

/******************************************************************************
 ** Description: Checks to make sure input is a valid integer (not a string).
 **              Uses atoi to convert from string back to integer and returns.
 ******************************************************************************/
int intCheck() {
    std::string input;
    int num = 0;
    do {
        std::getline(std::cin, input);
        input.erase(remove(input.begin(), input.end(), ' '), input.end());
        if(!isInt(input))
            std::cout << "Please enter a valid integer." << std::endl;
    } while (!(isInt(input)));
    num = atoi(input.c_str());
    return num;
}

/******************************************************************************
 ** Description: Bool is used to check if input is an integer.
 ******************************************************************************/
bool isInt(std::string input) {
    for (int i = 0; i < input.size(); i++) {
        if (!(isdigit(input[i])))
            return false;
    }
    return true;
}
