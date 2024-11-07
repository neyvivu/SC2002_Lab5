#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public virtual  Animal {
public:
    Mammal(string n, COLOR c);
    virtual ~Mammal();

    void eat() const;
};

#endif // MAMMAL_H
