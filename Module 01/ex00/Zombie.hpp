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
        void    announce(void);
};

Zombie* newZombie(string name);
void    RandomChump(string name);
