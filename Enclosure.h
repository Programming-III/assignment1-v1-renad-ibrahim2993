#include "Animal.h"

#ifndef UNTITLED2_ENCLOSURE_H
#define UNTITLED2_ENCLOSURE_H
#include<iostream>
#include<string>
#include "Animal.h"
using namespace std;
class Enclosure: public Animal {
private:
    Animal* animal;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(Animal& animal, int capacity, int currentCount, string& name, int age, bool isHungry);

    void addAnimal(Animal* a);
    //void displayAnimals();
    override void displayAnimals() const;
//getters
    Animal getAnimal();
    int getCapacity;
    int getCurrentCount;
    //setters
    void setAnimal(Animal* animal);
    void setCapacity(int capacity);
    void setCurrentCount(int currentCount);
~Enclosure();
};
#endif //UNTITLED2_ENCLOSURE_H
