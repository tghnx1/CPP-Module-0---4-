#include "Contact.hpp"

Contact::Contact()
  {
    index = -1;
  }

string     Contact::getContactName()
{
  return (this->first_name);
}

string     Contact::getLastName()
{
  return (this->last_name);
}

string     Contact::getNumber()
{
  return (this->phone);
}

string     Contact::getNick()
{
  return (this->nick_name);
}

string     Contact::getSecret()
{
  return (this->darkest_secret);
}

Contact Contact::createContact()
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
  //cin.getline(contact.darkest_secret, 100);
  getline(cin, contact.darkest_secret);
  return contact;
}

  int Contact::validate_phone(string phone)
{
  if (phone[0] != '+' && !(phone[0] >= '0' && phone[0] <= '9'))
    return 0;
  for (int i = 1; phone[i] != '\0'; i++)
  {
    if ((phone[i] < '0' || phone[i] > '9'))
      return 0;
  }
  return 1;
}
