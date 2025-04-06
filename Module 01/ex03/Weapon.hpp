#pragma once

#include <string>
#include <iostream>

class Weapon
{
  public:
    Weapon(std::string type);
    std::string  &getType();
    void    setType(std::string);
  private:
    std::string type;
};