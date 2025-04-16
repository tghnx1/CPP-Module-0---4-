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
  void *newCat;
  this->type = "Cat";
  this->catBrain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->catBrain;
}

//copy:

Cat::Cat(const Cat& other)
{
  std::cout << "Cat Copy Constructor called" << std::endl;
  if (this != &other)
  {
    this->type = "Cat";
    this->catBrain = new Brain(*other.catBrain);
    //this->catBrain = other.catBrain; // for test
  }
}

Cat& Cat::operator=(const Cat& other)
{
  std::cout << "Cat Copy Assignment operator called" << std::endl;
  this->type = "Cat";
  delete this->catBrain;
  this->catBrain = new Brain(*other.catBrain);
  return *this;
}