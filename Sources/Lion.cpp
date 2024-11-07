#include "Lion.h"

Lion::Lion(string n, COLOR c, string o) : Animal(n, c), Mammal(n, c), _owner(o) {
    cout << "Constructing Lion object " << n << endl;
}

Lion::~Lion() {
    cout << "Destructing Lion object" << endl;
}

void Lion::speak() const {
    cout << "Roar" << endl;
}

void Lion::move() const {
    cout << "Lion prowls majestically" << endl;
}
