/*
Rock Paper Scissors Lizard Spock
(The Big Band Theory)
*/

#include <iostream>
#include <stdlib.h>

int main() {

  // Live long and prosper

srand (time(NULL));

int computer = rand() % 3 + 1;

int user = 0;

std::cout << "======================\n";
std::cout << "Rock, Paper, Scissors!\n";
std::cout << "======================\n\n";

std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n\n";

std::cout << "What's your choice?\n";

int rock = 1;
int paper = 2;
int scissors = 3;

std::cin >> user;

std::cout << "Computer Chose " << computer << "\n";

  /*
  rock > scissors
  paper > rock
  scissors > paper
  */

if (user == rock && computer == scissors) {

  std::cout << "You Win!!\n";

} else if (user == paper && computer == rock) {

  std::cout << "You Win!!\n";

} else if (user == scissors && computer == paper) {

  std::cout << "You Win!!\n";

} else if (user == computer) {

  std::cout << "It's a Tie!\n";

} else {

  std::cout << "You Lose\n";
}



} 

  
