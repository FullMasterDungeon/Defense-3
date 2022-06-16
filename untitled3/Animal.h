#ifndef UNTITLED3_ANIMAL_H
#define UNTITLED3_ANIMAL_H


#include <string>
#include <iostream>

class Animal {
protected:
    std::string sound;
    bool is_wild;
    int age;
public:
    Animal(std::string s, bool wild, int age);

    Animal();

    ~Animal() {}

    virtual void MakeSound();

    // виртуальная функция без реализации.
    virtual void Wild() = 0;
};


#endif //UNTITLED3_ANIMAL_H
