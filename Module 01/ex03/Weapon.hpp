#include <string>
#include <iostream>
#include "HumanA.hpp"

using namespace std;

class Weapon
{
  public:
    Weapon(string type);
    string  &getType();
  private:
    string type;
    void    setType(string);
};