#pragma once
#include "Animal.hpp"




class Cat : public Animal
{
    public:
        Cat(void);
        ~Cat(void);
        void    makeSound(void) const;
};