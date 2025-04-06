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
        ~Zombie();
};

Zombie* newZombie(string name);
void randomChump(string name);