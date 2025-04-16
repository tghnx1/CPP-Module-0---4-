#pragma once

#include <strings.h>
#include <iostream>

class A_Animal
{
    protected:
  std::string type;
    public:
  A_Animal(void);
  A_Animal(const A_Animal&);
  A_Animal& operator = (const A_Animal&);
  virtual         ~A_Animal();
  virtual void    makeSound(void) const = 0;
  std::string     getType(void) const;
};
