#ifndef UNTITLED2_BIRD_H
#define UNTITLED2_BIRD_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Bird:public Animal {
private:
    float wingSpan;
public:

    Bird();
    Bird(float wingSpan, string& name, int age, bool isHungry);
    //setters
    void setName(int name);
    void setAge(int age);
    void setIsHungry(bool isHungry);
    void set wingSpan(float wingSpan);

    //getters
    string getName();
    int getAge();
    bool getIsHungry();
    float getWingSpan();
    override void display() const;

    ~Bird();
};

#endif //UNTITLED2_BIRD_H
