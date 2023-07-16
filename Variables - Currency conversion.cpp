#include <iostream>

int main() {
  double pesos, reais, soles, dollars;
  //ask the user to input the value of all foreign money
  std::cout << "Enter the amount of Columbian Pesos you have: \n";
  std::cin >> pesos; 
   std::cout << "Enter the amount of Brazilian Reais you have: \n";
  std::cin >> reais; 
   std::cout << "Enter the amount of Peruvian Soles you have: \n";
  std::cin >> soles; 

  // conversion rates
  double convert_reais = reais * 0.19;
  double convert_pesos = pesos * 0.00021;
  double convert_soles = soles * 0.26;
  // sum up all and display USD
  double US_dollars = convert_reais + convert_pesos + convert_soles;
std::cout << "The amount of money you have in USD is: " << US_dollars << "\n";
}