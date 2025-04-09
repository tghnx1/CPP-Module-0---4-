#include "Contact.hpp"

Contact::Contact()
  {
    index = -1;
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
