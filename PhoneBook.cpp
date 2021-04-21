#include <iostream>
#include <fstream>
#include <string>
#include "windows.h"
#include "PhoneBook.h"

using namespace std;

int PhoneBook::addNumber(const string &name, const  string &number)
{
	fstream fs("phonebook.txt", ios_base::app);

	if (fs.is_open())
	{
		fs << name << endl;
		fs << number << endl;
		fs.close();
		return 0;
	}

	return -1;
}

void PhoneBook::showList(const string &filename)
{
	cout << endl;
	fstream fs(filename, ios_base::in);
	string buff;
	
	while (fs >> buff)
	{
		cout << buff << endl;
	}

	fs.close();
	cout << endl;
}

void PhoneBook::searchNumber(const string &name)
{
	cout << endl;
	fstream fs("phonebook.txt", ios::in | ios::out | ios::app);
	string buffNum, buffName, sName;
	cout << "Enter name: ";
	cin >> sName;

	while (fs >> buffName >> buffNum)
	{
		if (buffName == sName)
		{
			cout << sName << "`s number: " << buffNum << endl;
		}
	}

	fs.close();
	cout << endl;
}

void PhoneBook::searchName(const string &number)
{
	cout << endl;
	fstream fs("phonebook.txt", ios::in | ios::out | ios::app);
	string buffNum, buffName, sNum;
	cout << "Enter number: ";
	cin >> sNum;

	while (fs >> buffName >> buffNum)
	{
		if (buffNum == sNum)
		{
			cout << sNum << " is " << buffName << "`s number" << endl;
		}
	}

	fs.close();
	cout << endl;
}