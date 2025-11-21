#include <iostream>

int main() {
  int cat_years = 0;
  int human_years = 0;
  std::cout << "insert how many years does your cat have:  ";
  std::cin >> cat_years;
  human_years = (cat_years - 2) * 4 + 24;
  std::cout << "Your cat is about " << human_years << " years old (in human years)";
  
}