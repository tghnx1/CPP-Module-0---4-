#include "phonebook.hpp"

//g++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp

int Contact::validate_phone(char *phone)
{
  if (phone[0] != '+' && !(phone[0] > '0' && phone[0] < '9'))
    return 0;
  for (int i = 1; phone[i] != '\0'; i++)
  {
    if ((phone[i] < '0' || phone[i] > '9'))
      return 0;
  }
  return 1;
}

void  PhoneBook::add()
{
  Contact contact;

  cout << "Write the first name:" << std::endl;
  cin >> contact.first_name;
  cout << "Write the last name:" << std::endl;
  cin >> contact.last_name;
  cout << "Write the nick name:" << std::endl;
  cin >> contact.nick_name;
  cout << "Write the number:" << std::endl;
  cin >> contact.phone;
  while (!contact.validate_phone(contact.phone))
  {
          cout << "Only '+' and numbers allowed!!!!!" << std::endl;
          cin.clear();               // clear the error flags
		  cin.ignore(10000, '\n'); // skip the buffer
          cin >> contact.phone;
  }

  cout << "Write the darkest secret:" << std::endl;
  cin.ignore(10000, '\n'); // skip the buffer
  cin.getline(contact.darkest_secret, 100);
  if (size == 8)
  {
      contacts[oldest_index] = contact;
      if (oldest_index == 7)
        oldest_index = 0;
      else
        oldest_index ++;
  }
  else
  {
      contacts[size] = contact;
      size++;
  }
  cout << "Contact added!" << std::endl;
  cout << "Write the command (ADD/SEARCH/EXIT):" << endl;
}

void PhoneBook::truncate(char *cur_str)
{
  if (strlen(cur_str) < 11)
  {
    cout << setw(10) << cur_str;
    return;
  }
  char new_str[11];
  strncpy(new_str, cur_str, 9);
  new_str[9] = '.';
  new_str[10] = '\0';
  cout << setw(10) << new_str;
}

void PhoneBook::search()
{
    cout << right;
    cout << setw(10) << "Index:"     << "|"
         << setw(10) << "First name" << "|"
         << setw(10) << "Lastname"   << "|"
         << setw(10) << "Nickname"
         << std::endl;
    cout << "-------------------------------------------" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << setw(10) << i << "|";
    truncate(contacts[i].first_name);
    cout << "|";
    truncate(contacts[i].last_name);
    cout << "|";
    truncate(contacts[i].nick_name);
    cout << endl;
  }
  contact_display(ask_index());
}

void PhoneBook::contact_display(int index)
{
    for (int i = 0; i < size; i++)
    {
      if (i == index)
        cout << contacts[i].first_name << "\n"
             << contacts[i].last_name << "\n"
             << contacts[i].nick_name << "\n"
      		 << contacts[i].phone << "\n"
             << contacts[i].darkest_secret
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

Contact::Contact()
  {
    first_name[0] = '\0';
    last_name[0] = '\0';
    nick_name[0] = '\0';
    phone[0] = '\0';
    darkest_secret[0] = '\0';
    index = -1;
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
      exit(0);
    if (!strcmp(command, "SEARCH"))
        book.search();
    if (!strcmp(command, "ADD"))
        book.add();
      ignore = 1;
  }
  return (0);
}