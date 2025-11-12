#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string, int, bool);
    void setName(string);
    void setAge(int);
    void setIsHungry(bool);
    string getName();
    int getAge();
    bool getIsHungry();
    virtual void display();
    virtual ~Animal();
};
#endif
