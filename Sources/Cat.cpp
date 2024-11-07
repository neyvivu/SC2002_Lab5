#include "Cat.h"

Cat::Cat(string n, COLOR c, string o) : Animal(n,c), Mammal(n, c), _owner(o) {
    cout << "Constructing Cat object " << n << endl;
}

Cat::~Cat() {
    cout << "Destructing Cat object" << endl;
}

void Cat::speak() const {
    cout << "Meow" << endl;
}

void Cat::move() const {
    cout << "Cat moves gracefully" << endl;
}
