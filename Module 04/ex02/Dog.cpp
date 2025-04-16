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
  this->dogBrain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->dogBrain;
}

//copy

Dog::Dog(const Dog& newone)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->type = newone.type;
    this->dogBrain = new Brain(*newone.dogBrain); // deep copy
}

Dog &Dog::operator=(const Dog& newone)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &newone)
    {
        this->type = newone.type;
        delete this->dogBrain;
        this->dogBrain = new Brain(*newone.dogBrain); // deep copy
    }
    return (*this);
}