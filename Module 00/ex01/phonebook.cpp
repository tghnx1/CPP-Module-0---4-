#include <iostream>
#include <list>
#include <string>

//C++00 % g++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp

class contact
{
  public:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    long phone;
    std::string darkest_secret;
};

class PhoneBook
{
public:
  std::list<contact> contacts;
void  add(contact contact)
{
  contacts.push_back(contact);
}
void display()
{
  for (std::list<contact>::iterator it = contacts.begin(); it != contacts.end(); it++)
    {
      std::cout << "________________________________\n";
      std::cout << it->first_name << "\n" << it->last_name << "\n"
           << it->nick_name << "\n" << it->phone << "\n" << it->darkest_secret << std::endl;
    }
}
};

void  ft_add_contact(PhoneBook *book)
{
  contact contact1;

  std::cout << "Write the first name:" << std::endl;
  std::cin >> contact1.first_name;
  std::cout << "Write the last name:" << std::endl;
  std::cin >> contact1.last_name;
  std::cout << "Write the nick name:" << std::endl;
  std::cin >> contact1.nick_name;
  std::cout << "Write the number:" << std::endl;
  std::cin >> contact1.phone;
  std::cout << "Write the darkest secret:" << std::endl;
  std::cin >> contact1.darkest_secret;
  book->add(contact1);
}

void  ft_exit()
{
  std::cout << "Exiting..." << std::endl; //TODO: free the stuff
  exit(0);
}

int main ()
{
  PhoneBook book;
  char command[7];
  int ignore = 0;
  while(1)
  {
    if (!ignore)
      std::cout << "Write the command (ADD/SEARCH/EXIT):" << std::endl;
    std::cin >> command;
    if (!strcmp(command, "EXIT"))
      ft_exit();
    if (!strcmp(command, "SEARCH"))
      std::cout << "Exiting..." << std::endl;
    if (!strcmp(command, "ADD"))
      {
        ft_add_contact(&book);
        book.display();
       }
    else
      ignore = 1;
  }
  return (0);
}