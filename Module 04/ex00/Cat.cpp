#include "Cat.hpp"

//actions:

void    Cat::makeSound(void) const
{
  std::cout << "Meeeooowww!!!!!!!!!!!!!!!!!!!" << std::endl;
}

// con(de)strucors:

Cat::Cat(void)
{
  std::cout << "Cat Constructor called" << std::endl;
  this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}