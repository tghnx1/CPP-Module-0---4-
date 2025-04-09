#include "PhoneBook.hpp"
#include "Contact.hpp"

int main ()
{
  PhoneBook book;
  string command;
  int ignore = 0;
  while(1)
  {
    if (!ignore)
      cout << "Write the command (ADD/SEARCH/EXIT):" << endl;
    cin >> command;
    if (command == "EXIT")
      exit(0);
    if (command == "SEARCH")
        book.search();
    if (command == "ADD")
        book.add();
      ignore = 1;
  }
  return (0);
}
