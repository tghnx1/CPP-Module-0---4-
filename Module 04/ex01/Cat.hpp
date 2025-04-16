#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        ~Cat(void);
        void    makeSound(void) const;
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
    private:
        Brain*  catBrain;
};