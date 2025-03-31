#include "phonebook.hpp"

//g++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp
void  PhoneBook::add()
{
  contact contact;

  cout << "Write the first name:" << std::endl;
  cin >> contact.first_name;
  cout << "Write the last name:" << std::endl;
  cin >> contact.last_name;
  cout << "Write the nick name:" << std::endl;
  cin >> contact.nick_name;
  cout << "Write the number:" << std::endl;
  cin >> contact.phone;
  cout << "Write the darkest secret:" << std::endl;
  cin >> contact.darkest_secret;
  contacts.push_back(contact);
  cout << "Contact added!" << std::endl;
  cout << "Write the command (ADD/SEARCH/EXIT):" << endl;
}

void PhoneBook::search()
{
  for (list<contact>::iterator it = contacts.begin(); it != contacts.end(); it++)
  {
    cout << "________________________________\n";
    cout << it->first_name << "\n" << it->last_name << "\n"
         << it->nick_name << "\n" << it->phone << "\n" << it->darkest_secret << endl;
  }
}

void  PhoneBook::ft_exit()
{
  cout << "Exiting..." << endl; //TODO: free the stuff
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
      cout << "Write the command (ADD/SEARCH/EXIT):" << endl;
    cin >> command;
    if (!strcmp(command, "EXIT"))
      book.ft_exit();
    if (!strcmp(command, "SEARCH"))
        book.search();
    if (!strcmp(command, "ADD"))
        book.add();
      ignore = 1;
  }
  return (0);
}