#include <iostream>

int main() 
{

  int y = 0;

  std::cout << "Enter year: ";
  std::cin >> y;

  if (y < 1000 or y > 9999) 
  {
    std::cout << "Invalid entry.\n";
  }

  else if (y % 4 == 0 and y % 100 != 0 or y % 400 == 0) 
  {
    std::cout << y;
    std::cout << " Leap year.\n";
  }

  else 
  {
    std::cout << y;
    std::cout << " Not a Leap year :(\n";
  }

}
