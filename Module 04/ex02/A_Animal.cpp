#include "A_Animal.hpp"

//member functions

std::string A_Animal::getType(void) const
{
  return this->type;
}

//constructors:

A_Animal::A_Animal(void)
{
    std::cout << "Basic constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal& newone)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = newone.type;
}

A_Animal &A_Animal::operator=(const A_Animal& newone)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &newone)
    {
        this->type = newone.type;
    }
    return (*this);
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal Destructor called" << std::endl;
}

