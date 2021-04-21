#include <iostream>
#include <fstream>
#include <string>
#include "windows.h"
#include "PhoneBook.h"

using namespace std;

void userInteface()
{
	int choice = 1;
	while (choice != 0)
	{
		PhoneBook phoneBook;
		string name;
		string number;


		cout << "0 - exit" << endl;
		cout << "1 - add" << endl;
		cout << "2 - print list" << endl;
		cout << "3 - find a phone number by name" << endl;
		cout << "4 - find a name by phone number" << endl;
		cout << "choice: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			break;
		case 1:
		{
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter number: ";
			cin >> number;

			phoneBook.addNumber(name, number);
			break;
		}
		case 2:
		{
			phoneBook.showList("phonebook.txt");
			break;
		}
		case 3:
		{
			cout << "Enter name: ";
			cin >> name;

			phoneBook.searchNumber(name);
			break;
		}
		case 4:
		{
			cout << "Enter number: ";
			cin >> number;

			phoneBook.searchName(number);
			break;
		}
		}
	}
}

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "Rus");

	fstream fs("phonebook.txt", ios::in | ios::out | ios::app);
	string buff;

	for (int i = 0; getline(fs, buff); i++)
	{
		cout << buff << endl;
	}

	userInteface();	

	fs.close();
	system("pause");
	return 0;
}