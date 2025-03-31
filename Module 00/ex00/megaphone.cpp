/*
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
 */

#include <iostream>

//C++00 % g++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp

int main(int argc, char **argv)
{
  if (argc < 2)
    {
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
      return 1;
    }
  for (int j = 1; j < argc; j++)
  {
    for (int i = 0; argv[j][i]; i++)
        argv[j][i] = toupper(argv[j][i]);
  }
  for (int i = 1; i < argc; i++)
  {
    std::cout << argv[i];
    if (i == argc - 1)
      std::cout << "\n";
    else
      std::cout <<" ";
  }
  return 0;
}