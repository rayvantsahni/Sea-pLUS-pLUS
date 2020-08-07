/*
Floats are floating point numbers with a storage size of 4 bytes, which means that these numbers can hold decimal places. This allows us to store numbers such as “8.344” and “3432432653.24123”.
*/

#include <iostream>
using namespace std;
int main()
{
  float myFloat;  // Creates a floating point variable
  myFloat = 8.3;  // Stores 8.3 in the new variable
  cout<< "Value of myFloat is: "<< myFloat << endl;
  return 0;
}

/*
Floating point numbers have a fixed size in memory. This means that a single float​ cannot possibly precisely store all of the decimal values in the real number system.
*/
