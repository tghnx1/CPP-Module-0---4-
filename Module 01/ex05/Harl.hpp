#pragma once
#include <iostream>
#include <string>

using namespace std;

class Harl
{
  public:
    void complain(string level);
  private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};