#include <iostream>
#include <cstdlib>
int main() {

char question; 
// establish dominance and omniscience
std::cout << "I am the MAGIC 8-BALL. Take heed of my words.\n";

//allow for random number generator to spit out answer
srand(time(NULL));

// reduce infinite numbers to allow a case to always be determinedd
int answer = std::rand() % 20;
switch(answer) {

case 1:
std::cout << "It is certain.\n";
break;
case 2:
std::cout << "It is decidely so.\n";
break;
case 3:
std::cout << "Without a doubbt.\n";
break;
case 4:
std::cout << "Yes - definitely.\n";
break;
case 5:
std::cout << "You may rely on it.\n";
break;
case 6:
std::cout << "As I see it, yes.\n";
break;
case 7:
std::cout << "Most likely.\n";
break;
case 8:
std::cout << "Outlook good.\n";
break;
case 9:
std::cout << "Yes.\n";
break;
case 10:
std::cout << "Signs point to yes.\n";
break;
case 11:
std::cout << "Reply hazy, try again.\n";
break;
case 12:
std::cout << "Ask again later.\n";
break;
case 13:
std::cout << "Better not tell you now.\n";
break;
case 14:
std::cout << "Cannot predict now.\n";
break;
case 15:
std::cout << "Concentrate and ask again.\n";
break;
case 16:
std::cout << "Don't count on it.\n";
break;
case 17:
std::cout << "My reply is no.\n";
break;
case 18:
std::cout << "My sources say no.\n";
break;
case 19:
std::cout << "Outlook not so good.\n";
break;
case 20:
std::cout << "Very doubtful.\n";
break;
  }
  return 0;
}