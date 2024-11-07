#ifndef DOG_H
#define DOG_H

#include "Mammal.h"

class Dog : public Mammal {
public:
    Dog(string n, COLOR c, string o);
    ~Dog();

    void speak() const override;
    void move() const override;

private:
    string _owner;
};

#endif // DOG_H
