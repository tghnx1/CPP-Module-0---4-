#pragma once

#include <strings.h>
#include <iostream>

class Animal
{
  protected:
  std::string type;
  public:
  Animal(void);
  Animal(const Animal&);
  Animal& operator = (const Animal&);
  virtual ~Animal();
  virtual void    makeSound(void) const;
  std::string getType(void) const;
};
