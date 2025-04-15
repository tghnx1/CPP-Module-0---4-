#include "PhoneBook.hpp"
#include "Contact.hpp"

//g++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp

void  PhoneBook::add()
{
  Contact contact;

  contact = contact.createContact();
  if (size == 8)
  {
      this->contacts[oldest_index] = contact;
      if (oldest_index == 7)
        oldest_index = 0;
      else
        oldest_index ++;
  }
  else
  {
      this->contacts[size] = contact;
      size++;
  }
  cout << "Contact added!" << std::endl;
  cout << "Write the command (ADD/SEARCH/EXIT):" << endl;
}

void PhoneBook::truncate(string cur_str)
{
  if (cur_str.size() < 11)
  {
    cout << std::setw(10) << cur_str;
    return;
  }
  string new_str = cur_str.substr(0, 9) + ".";
  cout << std::setw(10) << new_str;
}

void PhoneBook::search()
{
	if (!this->size)
	{
		  cout << "The Phonebook is empty!!!!!!!!!!!!!!!!!!!!!!" << endl;
		  return;
	}
    cout << std::right;
    cout << std::setw(10) << "Index:"     << "|"
         << std::setw(10) << "First name" << "|"
         << std::setw(10) << "Lastname"   << "|"
         << std::setw(10) << "Nickname"
         << std::endl;
    cout << "-------------------------------------------" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << std::setw(10) << i << "|";
    truncate(contacts[i].getContactName());
    cout << "|";
    truncate(contacts[i].getLastName());
    cout << "|";
    truncate(contacts[i].getNick());
    cout << endl;
  }
  contact_display(ask_index());
}

void PhoneBook::contact_display(int index)
{
    for (int i = 0; i < size; i++)
    {
      if (i == index)
        cout << contacts[i].getContactName() << "\n"
             << contacts[i].getLastName() << "\n"
             << contacts[i].getNick() << "\n"
      		 << contacts[i].getNumber() << "\n"
             << contacts[i].getSecret()
      	     << endl;
    }
}

int PhoneBook::ask_index()
{
  int user_index = -1;

  while (user_index == -1)
  {
      cout << "Write the Index:" << std::endl;
      cin >> user_index;
      while (cin.fail() || user_index < 0 || user_index >= size)
      {
          cout << "Write the correct Index!" << std::endl;
          cin.clear();               // clear the error flags
		  cin.ignore(10000, '\n'); // skip the buffer
          cin >> user_index;
      }
  }
  return user_index;
}

PhoneBook::PhoneBook()
{
    size = 0;
    oldest_index = 0;
}

