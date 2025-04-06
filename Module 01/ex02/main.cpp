#include <iostream>

using namespace std;

int main(void)
{
  string str = "HI THIS IS BRAIN";
  string *stringPTR = &str;
  string& stringREF = str;

  cout << &str << endl;
  cout << stringPTR << endl;
  cout << &stringREF << endl;

  cout << str << endl;
  cout << *stringPTR << endl;
  cout << stringREF << endl;
}