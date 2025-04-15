#include "Dog.hpp"

Dog::Dog(void)
{
  this->type = "Dog";
}

void    Dog::makeSound(void) const
{
  std::cout << "AAAAAAAAWWWWWWWWWWWWWWWWWWW!!!!!!!!!!!!!!!!!!!" << std::endl;
}