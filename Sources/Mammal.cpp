#include "Mammal.h"

Mammal::Mammal(string n, COLOR c) : Animal(n, c) {
    cout << "Constructing Mammal object " << n << endl;
}

Mammal::~Mammal() {
    cout << "Destructing Mammal object" << endl;
}

void Mammal::eat() const {
    cout << "Mammal eat" << endl;
}
