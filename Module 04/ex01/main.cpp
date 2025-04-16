#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* animals[100];

    for (int i = 0; i < 50; i++)
          animals[i] = new Dog();
    for (int i = 50; i < 100; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 100; i++)
    {
        std::cout << animals[i]->getType() << " deleted" << std::endl;
        delete animals[i];
    }
    Dog dog1;
    Dog dog2;
    dog1 = dog2;
    Cat cat1;
    Cat cat2(cat1);

    return 0;
}