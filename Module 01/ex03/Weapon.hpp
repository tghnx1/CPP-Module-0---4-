#include <string>
#include <iostream>
#include "HumanA.hpp"

class Weapon
{
  public:
    Weapon(std::string type);
    std::string  &getType();
  private:
    std::string type;
    void    setType(std::string);
};