#ifndef UNTITLED2_MAMMAL_H
#define UNTITLED2_MAMMAL_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Mammal:public Animal {
private:
    string furColor;
public:

    Mammal();
    Mammal(string furColor, string name, int age, bool isHungry);
    //setters
    void setName(string name);
    void setAge(int age);
    void setIsHungry(bool isHungry);
    void set furColor(string furColor);

    //getters
    string getName();
    int getAge();
    bool getIsHungry();
    string getFurColor();
    override void display() const;

    ~Mammal();
};
#endif //UNTITLED2_MAMMAL_H
