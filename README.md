# Rock_Paper_Scissors

// This is my first attempt at building the game "Rock, Paper, Scissors" in C++.

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

std::cout << " ====================\n";
std::cout << "Rock, Paper, Scissors!\n";
std::cout << " ====================\n\n";

std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n\n";

std::cout << "Choose!\n";

std::cin >> user;

  //  1 beats 3, 2 beats 1, 3 beats 2
  //  This is where the meat of the game is.

//  This section is if the computer "chooses" 1, or Rock.

if (computer == 1 && user == 2) {

  std::cout << "You Win!!\n";

}

  else if (computer == 1 && user == 3) {

    std::cout << "You Lose.\n";

  }

  else {

    std::cout << "It's a Tie!\n";
}

//  This section is if the computer "chooses" 2, or Paper.

  if (computer == 2 && user == 3) {

    std::cout << "You Win!!\n";

  }

  else if (computer == 2 && user == 1) {

    std::cout << "You Lose.\n";

  }

  else {

    std::cout << "It's a Tie!\n";

  }

//  This section is if the computer "chooses" 3, or Scissors.

  if (computer == 3 && user == 2) {

    std::cout << "You Win!!\n";

}

  else if (computer == 3 && user == 1) {

    std::cout << "You Lose.\n";

  }

  else {

    std::cout << "It's a Tie!\n";
    
  }

}
