#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int choice;
	cout << "Welcome to main menu!" << endl;
	cout << "--------------------------" << endl;
	cout << " " << endl;
	cout << "1. Login" << endl;
	cout << "2. Register" << endl;
	cout << " " << endl;
	cout << "Please select an option(1 or 2): ";
	cin >> choice;

	if (choice == 1)
	{
		string username, password;

		cout << " " << endl;
		cout << " You have selected Login." << endl;
		cout << " " << endl;

		cout << "Please enter your username: ";
		cin >> username;

		cout << "Please enter your password: ";
		cin >> password;

		ofstream readFile("db.txt", ios::app);

		if (readFile.is_open())
		{
			readFile << username << " " << password << endl;
			readFile.close();
			cout << " " << endl;
			cout << "Login successful!" << endl;
		}
		else
		{
			cout << " " << endl;
			cout << "Error opening file!" << endl;
		}
	}
	else if (choice == 2)
	{
		string selectedUsername, selectedPassword;
		string storedUsername, storedPassword;
		bool isAuthenticated = false;

		cout << " " << endl;
		cout << " You have selected Register." << endl;
		cout << " " << endl;

		cout << "Please enter your username: ";
		cin >> selectedUsername;

		cout << "Please enter your password: ";
		cin >> selectedPassword;

		ifstream readFile("db.txt");

		if (!readFile.is_open())
		{
			cout << "Error opening file. First you have to create an account" << endl;
		}
		else
		{
			while (readFile >> storedUsername >> storedPassword)
			{
				if (storedUsername == selectedUsername && storedPassword == selectedPassword)
				{
					isAuthenticated = true;
					break;
				}
			}
			readFile.close();

			if (isAuthenticated)
			{
				cout << "Registration successful! You are now logged in." << endl;
			}
			else
			{
				cout << "Invalid username or password. Registration failed." << endl;
			}
		}
	}
	else
	{
		cout << "Invalid option selected. Please restart the program." << endl;
	}

	return 0;
}