#pragma once
#include <string>
#include <iostream>

using namespace std;

class Zombie
{
private:
    string name;
public:
    Zombie(string name_zombie);
    ~Zombie(void);
    void    announce(void);
};

Zombie* newZombie(string name);
void randomChump( std::string name );