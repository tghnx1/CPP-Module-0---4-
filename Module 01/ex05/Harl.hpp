#pragma once
#include <iostream>
#include <string>

using std::string;

class Harl
{
  public:
    void complain(const string &level);
  private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};