#include "Harl.hpp"

void Harl::complain(string level)
{
  string commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*functions[])() =
  {
    Harl::debug(),
    Harl::info(),
    Harl::warning(),
    Harl::error()
  }
  for (int i = 0; i < 4; i++)
  {
    if (level == commands[i])
      this->*
  }
}