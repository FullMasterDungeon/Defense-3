#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Wolf.h"


int main() {
    std::vector<Animal *> animals;

    Wolf *wolf1 = new Wolf("Woof", true, 5, "forest");
    Wolf *wolf2 = new Wolf("Woof-woof", true, 6, "mountains");
    Wolf *wolf3 = new Wolf("Woof-woof-woof", false, 12, "zoo");

    Cat *cat1 = new Cat("Meow", true, 12, "-");
    Cat *cat2 = new Cat("Meow-meow", false, 2, "Persian");
    Cat *cat3 = new Cat("Meow-meow-meow", false, 3, "Siberian");

    animals.push_back(wolf1);
    animals.push_back(wolf2);
    animals.push_back(wolf3);
    animals.push_back(cat1);
    animals.push_back(cat2);
    animals.push_back(cat3);
    cat2->ShowInf();

    for (auto el: animals) {
        delete el;
    }
}
