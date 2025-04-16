#pragma once

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain&);
        Brain& operator = (const Brain&);
        ~Brain();
    private:
        std::string ideas[100];
};


