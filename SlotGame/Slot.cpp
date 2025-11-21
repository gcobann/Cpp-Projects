#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

int main()
{
	int difficulty;
	double betAmount;

	cout << "Slot Machine Game" << endl;
	cout << "------------------" << endl;
	cout << "Please enter your bet amount: ";
	cin >> betAmount;
	cout << "Please choose the difficulty level (1- Easy, 2- Medium, 3- Hard): ";
	cin >> difficulty;

	srand(time(0)); // Seed the random number generator

	switch (difficulty)
	{
	case 1:
	{
		int cNumber;
		int sNumber = rand() % 10 + 1; // 0-10 arası sayı üretir
		cout << "Please enter a number between 1 and 10: ";
		cin >> cNumber;
		if (cNumber < 1 || cNumber > 10)
		{
			cout << "Invalid number. Please enter a number between 1 and 10." << endl;
			break;
		}
		if (cNumber == sNumber)
		{
			cout << "Congratulations! You won " << betAmount * 2 << "!" << endl;
		}
		else
		{
			cout << "Sorry, you lost. The correct number was " << sNumber << "." << endl;
		}
		break;
	}
	case 2:
	{
		const int maxTries = 3;
		int remaining = maxTries;
		int cNumber2;
		int sNumber2 = rand() % 50 + 1;
		bool won = false;

		cout << "Please enter a number between 1 and 50: ";
		cin >> cNumber2;

		while (remaining > 0)
		{
			if (cNumber2 < 1 || cNumber2 > 50)
			{
				cout << "Invalid number. Please enter a number between 1 and 50." << endl;
				continue;
			}

			if (cNumber2 == sNumber2)
			{
				cout << "Congratulations! You won " << betAmount * 5 << "!" << endl;
				won = true;
				break;
			}

			remaining--;

			if (remaining == 0)
			{
				cout << "Sorry, you lost. The correct number was " << sNumber2 << "." << endl;
				break;
			}
			else
			{
				cout << "Incorrect guess. You have " << remaining << " tries left. Please try again: ";
				cin >> cNumber2;
			}
		}
		break;
	}
	case 3:
	{
		const int maxTries2 = 5;
		int remaining2 = maxTries2;
		int cNumber3;
		int sNumber3 = rand() % 100 + 1;
		bool won2 = false;

		cout << "Please enter a number between 1 and 100: ";
		cin >> cNumber3;

		while (remaining2 > 0)
		{
			if (cNumber3 < 1 || cNumber3 > 100)
			{
				cout << "Invalid number. Please enter a number between 1 and 100." << endl;
				continue;
			}

			if (cNumber3 == sNumber3)
			{
				cout << "Congratulations! You won " << betAmount * 10 << "!" << endl;
				won2 = true;
				break;
			}

			remaining2--;

			if (remaining2 == 0)
			{
				cout << "Sorry, you lost. The correct number was " << sNumber3 << "." << endl;
				break;
			}
			else
			{
				cout << "Incorrect guess. You have " << remaining2 << " tries left. Please try again: ";
				cin >> cNumber3;
			}
		}
		break;
	}
	default:
		cout << "Invalid difficulty level selected." << endl;
		break;
	}

	return 0;
}