#ifndef LION_H
#define LION_H

#include "Mammal.h"

class Lion : public Mammal {
public:
    Lion(string n, COLOR c, string o);
    ~Lion();

    void speak() const override;
    void move() const override;
private:
    string _owner;
};

#endif // LION_H
