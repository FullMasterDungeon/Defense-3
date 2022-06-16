//
// Created by bogda on 15.06.2022.
//

#include "Cat.h"

void Cat::ShowInf() {
    std::cout << "Type of cat is " << type << ". Age: " << age << std::endl;
}

void Cat::Wild() {
    if (is_wild)
        std::cout << "wild cat" << std::endl;
    else
        std::cout << "house cat" << std::endl;
}

void Cat::MakeSound() {
    std::cout << "Cat says " << sound << std::endl;
}

Cat::Cat(std::string s, bool wild, int age, std::string type) : Animal(s, wild, age) {
    this->type = type;
}
