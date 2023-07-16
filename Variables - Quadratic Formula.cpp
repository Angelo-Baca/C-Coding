#include <iostream>
#include <cmath>

int main() {
  //declare three quadratic variables
  double a;
  double b;
  double c;

  // acquire user input for values
  std::cout << "Enter the value of variable a: \n";
  std::cin >> a;
   std::cout << "Enter the value of variable b: \n";
  std::cin >> b;
   std::cout << "Enter the value of variable c: \n";
  std::cin >> c;
  // declare b squared
  double bsquared = pow(b,2);
  
  // positive value for quadratic
  double root1 = ((-b + sqrt(bsquared - (4*a*c))) / (2*a));
  std::cout << "The positive root solution is: " << root1 << "\n";
  
  // negative vaule for quadratic root
    double root2 = ((-b - sqrt(bsquared - (4*a*c))) / (2*a));
  std::cout << "The negative root solution is: " << root2 << "\n";
  
  
}