#include "Reptile.h"

Reptile::Reptile() : Animal()
{
    isVenomous = false;
}

Reptile::Reptile(string n, int a, bool h, bool v) : Animal(n, a, h)
{
    isVenomous = v;
}

void Reptile::setIsVenomous(bool v) { isVenomous = v; }
bool Reptile::getIsVenomous() { return isVenomous; }

void Reptile::display()
{
    cout << getName() << "Age: " << getAge() << ", ";
    if (isVenomous)
        cout << "Venomous ";
    else
        cout << "Non-Venomous ";
    if (getIsHungry())
        cout << "Hungry"<emdl;
    else
        cout << "Not Hungry";
    
}
