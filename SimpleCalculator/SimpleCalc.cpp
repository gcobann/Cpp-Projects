#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Choose an operation (+, -, *, /): ";
	cin >> op;

	cout << "Enter second number: ";
	cin >> num2;

	switch (op)
	{
	case '+':
		cout << "Sum: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "Difference: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "Product: " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0)
		{
			cout << "Answer is: " << num1 / num2 << endl;
		}
		else
		{
			cout << "Error: Division by zero!" << endl;
		}
		break;
	}

	return 0;
}