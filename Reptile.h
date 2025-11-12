#ifndef UNTITLED2_REPTILE_H
#define UNTITLED2_REPTILE_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Reptile:public Animal {
private:
    bool isVenomous ;
public:

    Reptile();
    Reptile(float wingSpan, string name, int age, bool isHungry);
    //setters
    void setName(string name);
    void setAge(int age);
    void setIsHungry(bool isHungry);
    void setIsVenomous(bool isVenomous);

    //getters
    string getName();
    int getAge();
    bool getIsHungry();
    bool getIsVenomus();

    override void display() const;

    ~isVenomous();
};
#endif //UNTITLED2_REPTILE_H
