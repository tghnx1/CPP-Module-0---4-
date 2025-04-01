#include "phonebook.hpp"

//g++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp
void  PhoneBook::add()
{
  Contact contact(contacts.size());

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

Contact::Contact(int    contacts_size)
    {
        this->index = contacts_size;
    };

void PhoneBook::truncate(string cur_str)
{
  if (cur_str.size() < 11)
  {
    cout << setw(10) << cur_str;
    return;
  }
  string new_str = cur_str;
  new_str = new_str.substr(0, 9) + '.';
  cout << setw(10) << new_str;
}

void PhoneBook::search()
{
  int i = 0;

    cout << right;
    cout << setw(10) << "Index:"     << "|"
         << setw(10) << "First name" << "|"
         << setw(10) << "Lastname"   << "|"
         << setw(10) << "Nickname"
         << std::endl;
    cout << "-------------------------------------------" << endl;
  for (list<Contact>::iterator it = contacts.begin(); it != contacts.end(); it++, i++)
  {
    cout << setw(10) << i << "|";
    truncate(it->first_name);
    cout << "|";
    truncate(it->last_name);
    cout << "|";
    truncate(it->nick_name);
    cout << endl;
  }
  int user_index;
  user_index = ask_index();
  contact_display(user_index);
}

void PhoneBook::contact_display(int index)
{
    cout << "lol" << endl;
}

int PhoneBook::ask_index()
{
  int user_index = -1;
  while (user_index == -1)
  {
      cout << "Write the Index:" << std::endl;
      cin >> user_index;
      while (user_index < 0 || user_index >= contacts.size())
      {
          cout << "Write the correct Index!" << std::endl;
          cin >> user_index;
      }
  }
  return user_index;
}

void  PhoneBook::ft_exit()
{
  cout << "Exiting..." << endl;
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