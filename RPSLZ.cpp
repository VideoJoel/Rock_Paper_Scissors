/*
Rock Paper Scissors Lizard Spock
(The Big Band Theory)
As Sheldon explains, "Scissors cuts paper, paper covers rock, rock crushes lizard, lizard poisons Spock, Spock smashes scissors, scissors decapitates lizard, lizard eats paper, paper disproves Spock, Spock vaporizes rock, and as it always has, rock crushes scissors."
*/

#include <iostream>
#include <stdlib.h>

int main() {

  // Live long and prosper

srand (time(NULL));

int computer = rand() % 5 + 1;

int user = 0;

std::cout << "======================\n";
std::cout << "Rock, Paper, Scissors!\n";
std::cout << "======================\n\n";

std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n";
std::cout << "4) Lizard\n";
std::cout << "5) Spock\n";

std::cout << "What's your choice?\n";

int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int Spock = 5;

std::cin >> user;

std::cout << "Computer Chose " << computer << "\n";

  /*
  scissors > paper
  paper > rock
  rock > lizard
  lizard > Spock
  Spock > scissors
  scissors > lizard
  lizard > paper
  paper > Spock
  Spock > rock
  rock > scissors
  */

if (user == scissors && computer == paper) {

  std::cout << "You Win!!\n";

} else if (user == paper && computer == rock) {

  std::cout << "You Win!!\n";

} else if (user == rock && computer == lizard) {

  std::cout << "You Win!!\n";

} else if (user == lizard && computer == Spock) {

  std::cout << "You Win!!\n";

} else if (user == Spock && computer == scissors) {

  std::cout << "You Win!!\n";

} else if (user == scissors && computer == lizard) {

  std::cout << "You Win!!\n";

} else if (user == lizard && computer == paper) {

  std::cout << "You Win!!\n";

} else if (user == paper && computer == Spock) {

  std::cout << "You Win!!\n";

} else if (user == Spock && computer == rock) {

  std::cout << "You Win!!\n";

} else if (user == rock && computer == scissors) {

  std::cout << "You Win!!\n";

}

 else if (user == computer) {

  std::cout << "It's a Tie!\n";

} else {

  std::cout << "You Lose\n";
}



} 

  
