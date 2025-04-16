#include "Animal.hpp"

//member functions

std::string Animal::getType(void) const
{
  return this->type;
}

void    Animal::makeSound(void) const
{
    std::cout << "Can you open a slot for me?" << std::endl;
}

//constructors:

Animal::Animal(void)
{
    std::cout << "Basic constructor called" << std::endl;
}

Animal::Animal(const Animal& newone)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = newone.type;
}

Animal &Animal::operator=(const Animal& newone)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &newone)
    {
        this->type = newone.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

