#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"

class Mammal : public Animal
{
private:
    string furColor;

public:
    Mammal();
    Mammal(string, int, bool, string);
    void setFurColor(string);
    string getFurColor();
    void display() override;
};
#endif
