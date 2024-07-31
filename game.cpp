#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


string getComputerChoice() {
    int randomNumber = rand() % 3; 
    switch (randomNumber) {
        case 0: return "rock";
        case 1: return "paper";
        case 2: return "scissors";
        default: return ""; 
    }
}

string determineWinner(const string& userChoice, const string& computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    }
    if ((userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "paper" && computerChoice == "rock") ||
        (userChoice == "scissors" && computerChoice == "paper")) {
        return "You win!";
    }
    return "Computer wins!";
}

int main() {
    string userChoice;
    string computerChoice;

    
    srand(static_cast<unsigned int>(time(0)));

  
    cout << "Enter rock, paper, or scissors: ";
    cin >> userChoice;

  
    computerChoice = getComputerChoice();

  
    cout << "Computer chose: " << computerChoice << endl;


    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}
