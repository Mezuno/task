#pragma once
class PhoneBook
{
public:

	int addNumber(const std::string &name, const  std::string &number);

	void showList(const std::string &filename);

	void searchNumber(const std::string &name);

	void searchName(const std::string &number);

};