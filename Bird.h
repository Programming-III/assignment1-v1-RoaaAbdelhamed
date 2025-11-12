#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"

class Bird : public Animal
{
private:
    float wingSpan;

public:
    Bird();
    Bird(string, int, bool, float);
    void setWingSpan(float);
    float getWingSpan();
    void display() override;
};
#endif
