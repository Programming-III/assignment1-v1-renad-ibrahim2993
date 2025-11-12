#ifndef UNTITLED2_VISITOR_H
#define UNTITLED2_VISITOR_H
#include<iostream>
#include<string>
using namespace std;
class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    void displayInfo();
    //getters
    string getvisitorName();
    int ticketsBought();
    //setters
    void setVisitorName(string visitorName);
    void setTicketsBought(int ticketsBought);
    ~Visitor();
};
#endif //UNTITLED2_VISITOR_H
