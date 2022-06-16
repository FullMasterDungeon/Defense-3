//
// Created by bogda on 15.06.2022.
//

#include "Wolf.h"

Wolf::Wolf(std::string s, bool wild, int age, std::string place) : Animal(s, wild, age) {
    place_to_live = place;
}

void Wolf::Wild() {
    if (is_wild)
        std::cout << "wild wolf" << std::endl;
    else
        std::cout << "house wolf" << std::endl;
}

void Wolf::MakeSound() {
    std::cout << "Animal says " << sound << std::endl;
}
