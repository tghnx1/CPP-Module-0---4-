#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        ~Dog(void);
        void    makeSound(void) const;
};

