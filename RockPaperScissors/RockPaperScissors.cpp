#include <iostream>
#include <string>
using namespace std;

int main()
{
    string choices[] = { "rock", "paper", "scissors" };
    string userChoice1;
    string userChoice2;

    cout << "Please make a choice (rock, paper, scissors): ";
    cin >> userChoice1;

    cout << "Please make a second choice (rock, paper, scissors): ";
    cin >> userChoice2;

    if (userChoice1 == userChoice2)
    {
        cout << "Draw" << endl;
    }
    else if (userChoice1 == "rock" && userChoice2 == "scissors" ||
        userChoice1 == "paper" && userChoice2 == "rock" ||
        userChoice1 == "scissors" && userChoice2 == "paper")
    {
        cout << "The first player won" << endl;
    }
    else if (userChoice2 == "rock" && userChoice1 == "scissors" ||
        userChoice2 == "paper" && userChoice1 == "rock" ||
        userChoice2 == "scissors" && userChoice1 == "paper")
    {
        cout << "The second player won" << endl;
    }
    else
    {
        cout << "Invalid selection. Please choose rock, paper or scissors." << endl;
    }

    return 0;
}