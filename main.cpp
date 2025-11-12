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
    Mammal("white", "lion", 5,true);
    Bird(2,"parrot",1,false);
    Reptile(3.2, "snake", 3,true);


    return 0;
}
