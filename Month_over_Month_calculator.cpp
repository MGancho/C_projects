#include <iostream>

int main() {
  double month_1 = 0.0;
  double month_2 = 0.0;
  std::cout << "how much money did you do last month: " ;
  std::cin >> month_1 ;
  std::cout << "how much money did you do this month: " ;
  std::cin >> month_2 ;
  double MoM = (month_2 - month_1)/ month_1 *100;
  std::cout << "The rate of change from the previous month to this month is about " << MoM << " %" ; 


}
