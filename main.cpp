#include <iostream>

int x, y, z, p;
float srednia;

int main(){
  std::cout << "Podaj 4 liczby";
  std::cin >> x;
  std::cin >> y;
  std::cin >> z;
  std::cin >> p;

  srednia = (x + y + z + p)/4;

  std::cout << srednia;
}
