#ifndef UNTITLED2_ANIMAL_H
#define UNTITLED2_ANIMAL_H
#include<iostream>
#include <string>
using namespace std;
class Animal {
private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal();
    Animal(string& name, int age, bool isHungry);
    //setters
    void setName(int name);
    void setAge(int age);
    void setIsHungry(bool isHungry);
    //getters
    string getName();
    int getAge();
    bool getIsHungry();

    virtual void display() const;
    void feed();
    ~Animal();
};
#endif //UNTITLED2_ANIMAL_H
