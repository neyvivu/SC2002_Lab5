#include "Dog.h"

Dog::Dog(string n, COLOR c, string o) : Animal(n,c), Mammal(n, c), _owner(o) {
    cout << "Constructing Dog object " << n << " with owner " << _owner << endl;
}

Dog::~Dog() {
    cout << "Destructing Dog object" << endl;
}

void Dog::speak() const {
    cout << "Woof" << endl;
}

void Dog::move() const {
    cout << "Dog runs" << endl;
}
