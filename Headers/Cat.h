#ifndef CAT_H
#define CAT_H

#include "Mammal.h"

class Cat : public Mammal {
public:
    Cat(string n, COLOR c, string o);
    ~Cat();

    void speak() const override;
    void move() const override;

private:
    string _owner;
};

#endif // CAT_H
