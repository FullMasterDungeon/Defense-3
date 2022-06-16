//
// Created by bogda on 15.06.2022.
//

#include "Animal.h"

void Animal::MakeSound() {
    std::cout << "Animal says " << sound << std::endl;
}

Animal::Animal(std::string s, bool wild, int age) {
    sound = s;
    is_wild = wild;
    this->age = age;
}

Animal::Animal() {

}
