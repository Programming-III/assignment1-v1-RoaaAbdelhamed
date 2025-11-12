#include "Enclosure.h"

Enclosure::Enclosure(int c)
{
    capacity = c;
    currentCount = 0;
    animals = new Animal *[capacity];
}

void Enclosure::addAnimal(Animal *a)
{
    if (currentCount < capacity)
        animals[currentCount++] = a;
}

void Enclosure::displayAnimals()
{
    cout << "Enclosure 1 Animals:\n";
    for (int i = 0; i < currentCount; i++)
    {
        animals[i]->display();
        cout << endl;
    }
}

Enclosure::~Enclosure()
{
    for (int i = 0; i < currentCount; i++)
        delete animals[i];
    delete[] animals;
}
