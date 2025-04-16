

#include "Brain.hpp"

//constructors:

Brain::Brain(void)
{
    std::cout << "Basic constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = "basic";
}


Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}


//copy

Brain::Brain(const Brain& newone)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    if (this != &newone)
    {
      for (int i = 0; i < 100; ++i)
          this->ideas[i] = newone.ideas[i];
    }
}

Brain &Brain::operator=(const Brain& newone)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &newone)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = newone.ideas[i];
    }
    return (*this);
}