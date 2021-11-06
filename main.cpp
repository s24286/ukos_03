#include <iostream>

int x, y, z;
float srednia;

int main(){
  std::cout << "Podaj 3 liczby";
  std::cin >> x;
  std::cin >> y;
  std::cin >> z;

  srednia = (x + y + z)/3;

  std::cout << srednia;
}
