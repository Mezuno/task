#pragma once
class PhoneBook
{
public:

	int addNumber(std::string name, std::string number);

	void showList(std::string filename);

	void searchNumber(std::string name);

	void searchName(std::string number);

};