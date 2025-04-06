#pragma once
#include <string>
#include <iostream>

using namespace std;

class Zombie
{
    private:
        string    name;
    public:
        void      announce();
        void      nameZombie(string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );