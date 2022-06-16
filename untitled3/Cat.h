#ifndef UNTITLED3_CAT_H
#define UNTITLED3_CAT_H

#include "Animal.h"

class Cat : public Animal {
private:
    std::string type;
public:
    Cat(std::string s, bool wild,int age, std::string type);

    void MakeSound() override;

    void Wild() override;

    void ShowInf();
};


#endif //UNTITLED3_CAT_H
