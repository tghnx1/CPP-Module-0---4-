#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
}

void    Cat::makeSound(void) const
{
  std::cout << "Meeeooowww!!!!!!!!!!!!!!!!!!!" << std::endl;
}