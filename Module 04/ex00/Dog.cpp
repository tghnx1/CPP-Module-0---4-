#include "Dog.hpp"

//actions:

void    Dog::makeSound(void) const
{
  std::cout << "AAAAAAAAWWWWWWWWWWWWWWWWWWW!!!!!!!!!!!!!!!!!!!" << std::endl;
}

// con(de)strucors:

Dog::Dog(void)
{
  std::cout << "Dog Constructor called" << std::endl;
  this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}