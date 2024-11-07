#include "Animal.h"

Animal::Animal() : _name("unknown"), _color(White) {
    cout << "Constructing Animal object " << _name << endl;
}

Animal::Animal(string n, COLOR c) : _name(n), _color(c) {
    cout << "Constructing Animal object " << _name << " with color " << _color << endl;
}

Animal::~Animal() {
    cout << "Destructing Animal object " << _name << endl;
}

void Animal::speak() const {
    cout << "Animal speaks" << endl;
}
