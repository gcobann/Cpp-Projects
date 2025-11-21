#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

// Öðrenci sýnýfýný ekleme
class students
{
public:
    string name;
    string surname;
    int number;
    string department;

    // Öðrenci bilgilerini almak
    void getInfo()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Surname: ";
        cin >> surname;
        cout << "Enter Number: ";
        cin >> number;
        cout << "Enter Department: ";
        cin >> department;

        // Dosyayý "Ekleme" (Append) modunda açýyoruz
        ofstream sFile("students.txt", ios::app);

        if (sFile.is_open())
        {
            sFile << name << " " << surname << " " << number << " " << department << endl;

            sFile.close();

            cout << "Kayit basarili!" << endl;
        }
        else
        {
            cout << "Dosya acilamadi!" << endl;
        }
    }

	// Öðrenci bilgilerini görüntüleme
    void viewInfo()
    {
		cout << "\n--- Student Records ---" << endl;

        ifstream sFile("students.txt"); // Dosyayý okuma modunda açar

        if (sFile.is_open())
        {
            // Dosyadan okuyup geçici olarak bu deðiþkenlere atayacaðýz
            int d_number;
			string d_name, d_surname, d_department;

            cout << "No\tAd\tSoyad\tBolum" << endl;
            cout << "------------------------------------" << endl;

            while (sFile >> d_name >> d_surname >> d_number >> d_department)
            {
                cout << d_number << "\t" << d_name << "\t" << d_surname << "\t" << d_department << endl;
			}
            sFile.close();
        }
        else
        {
			cout << "File cannot be opened!" << endl;
        }
    }
};

int main()
{
    students ogr;
	int choice;

    while (true)
    {
		cout << "--- Student Registration System ---" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. View Student" << endl;
		cout << "3. Exit" << endl;
		cout << "Select an option: ";
		cin >> choice;

        switch (choice)
        {
            case 1:
                ogr.getInfo();
				// Ýþlemin tamamlanmasýnýn ardýndan ana menüye dönmek için bekleme
                cout << "\nAna menuye donmek icin bir tusa basin..." << endl;
                system("pause>0");
			    break;

            case 2:
			    ogr.viewInfo();
				// Ana menüye dönmek için bekleme
                cout << "\nAna menuye donmek icin bir tusa basin..." << endl;
                system("pause>0");
                break;
			
			case 3:
			    cout << "Exiting the program." << endl;
                return 0;
            
            default:
				cout << "Invalid option. Please try again." << endl;
                system("pause>0");
				break;
        }
    }
	return 0;
}