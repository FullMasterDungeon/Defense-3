#ifndef UNTITLED3_WOLF_H
#define UNTITLED3_WOLF_H

#include "Animal.h"

class Wolf : public Animal {
private:
    std::string place_to_live;
public:
    Wolf(std::string s, bool wild, int age, std::string place);

    void MakeSound() override;

    void Wild() override;
};


#endif //UNTITLED3_WOLF_H
