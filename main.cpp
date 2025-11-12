#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    Enclosure(5, 0,"cat", 1,true);
    Mammal("white", "cow", 4,false);
    

    Bird(3.2,"bird",1,true);


    return 0;
}
