#include <iostream>

int main () {
// prepare coolant, brain may explode

for (int i = 1; i <= 100; i++) {
  std::cout << i << " \n";
  
// Now we include the modulo operator to output strings
// If it is divisible by 3 we output buzz, if it is divisble by 5 we output buzz
  if (i % 5 == 0) {
  std::cout << "Buzz\n";
  }
  else if (i % 3 == 0) {
    std::cout << "Fizz\n"; 
    } 
  else {
    std::cout << i << "\n";
    }
  }
  /* Just a note and an accidental discovery, if you make the computer process the multiples of 5 first it will only output one string and there will not need to be a line of code for modulo 15 */
}