/*
A char is an 8-bit integer. This means that an unsigned char can store between 0 and 255, and a signed char can store between -128 and 127. Unsigned chars are commonly used to store text in ASCII format. A char can be initialized to hold either a number or a character, but it will store only the ASCII value.
*/

#include <iostream>
using namespace std;

int main()
{
  char myChar='A';
  char myOtherChar=65;
  cout << "Value of myChar is: "<< myChar<<endl;
  cout << "Value of myOtherChar is: "<< myOtherChar<<endl;
  return 0;
}
