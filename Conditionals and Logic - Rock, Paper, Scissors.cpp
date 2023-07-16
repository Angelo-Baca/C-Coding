#include <iostream>
#include <stdlib.h>

/* This program is designed to challenge the developer to create a rock paper scissors variant that includes the choices Lizard and Spock. */

/* The rules are listed here
Scissors cuts Paper
Paper covers Rock
Rock crushes Lizard
Lizard poisons Spock
Spock smashes Scissors
Scissors decapitates Lizard
Lizard eats Paper
Paper disproves Spock
Spock vaporizes Rock
(and as it always has) Rock crushes Scissors */

/* In summary
Each element has two oppurtunities to win and two too lose. The point is too reduce the probability of a tie. */

int main () {

srand (time(NULL));
int computer = rand() % 3 + 1;
int user = 0;

// prompt the user to pick an element
std::cout << "We go on shoot.\n";
std::cout << "Rock, Paper, Scissors!\n";
std::cout << "===================\n";
std::cout << "Chose your hand.\n";

std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n";
std::cin >> user;

// logic for user
if (user == 1) {
  std::cout << "You chose Rock.\n"; 
  }
  else if (user == 2) {
  std::cout << "You chose Paper.\n";
  }
  else if (user == 3){
   std::cout << "You chose Scissors.\n"; 
  }
  else {
    std::cout << "Invalid entry, please try again.\n";
  }
  
  // logic for computer
if (computer == 1) {
  std::cout << "Computer chose Rock.\n"; 
  }
  else if (computer == 2) {
  std::cout << "Computer chose Paper.\n";
  }
  else {
    std::cout << "Computer chose scissors.\n";
  }
// For a tie
if (user == computer) {
  std::cout << "It's a tie!\n";
}
  // Logic for user if user picks rock
  else if (user == 1) {
    if (computer == 2) {
      std::cout << "You lost, so sad :(\n";
    }
    if (computer == 3) {
      std::cout << "You won! congrats!\n";
    }
  }
  // Logic for user if user picks paper
  else if (user == 2) {
    if (computer == 1) {
      std::cout << "You won!, congrats!\n";
    }
    if (computer == 3) {
      std::cout << "You lost, so sad :(\n";
    }
  }
    // Logic for user if user picks scissors
   else if (user == 3) {
    if (computer == 1) {
      std::cout << "You lost, so sad :(\n";
    }
    if (computer == 2) {
      std::cout << "You won, congrats!\n";
    }
  }
  return 0;
}