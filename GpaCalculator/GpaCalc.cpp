#include <iostream>
#include <string>
using namespace std;

int main()
{
    int classesTaken;
    cout << "How many classes have you taken: ";
    cin >> classesTaken;

    cout << "" << endl;

    string className[20];
    double credits[20];
    double points[20];

    for (int i = 0; i < classesTaken; i++)
    {
        cout << "Enter the name of class " << (i + 1) << ": ";
        cin >> className[i];
    }

    double totalCredits = 0.0;
    double totalPoints = 0.0;

    for (int i = 0; i < classesTaken; i++)
    {
        cout << "\nEnter the credit for " << className[i] << ": ";
        cin >> credits[i];

        cout << "Enter the grade point for " << className[i]
            << " (AA=4, BA=3.5, BB=3, CB=2.5, CC=2, DC=1.5, DD=1, FF=0): ";
        cin >> points[i];

        totalCredits += credits[i];
        totalPoints += (credits[i] * points[i]);
    }

    double cgpa = totalPoints / totalCredits;

    cout << "\nTotal credits: " << totalCredits << endl;
    cout << "Total points: " << totalPoints << endl;
    cout << "Your CGPA: " << cgpa << endl;

    return 0;
}