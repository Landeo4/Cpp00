#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::setIsExecuted(void)
{
	this->is_executed = 0;
}

int PhoneBook::getIsExecuted(void)
{
	return (this->is_executed);
}

void PhoneBook::setFirstOccurence(int set)
{
	this->first_occurence = set;
}

int PhoneBook::getFirstOccurence(void)
{
	return (this->first_occurence);
}

int PhoneBook::setContact(int i)
{
	std::string x;

	std::cout << "Please set the first name" << std::endl;
	std::cin >> x;
	if (!std::cin)
		exit(1);
	this->_contact[i].setFirstName(x);
	std::cout << "Please set the last name" << std::endl;
	std::cin >> x;
	if (!std::cin)
		exit(1);
	this->_contact[i].setLastName(x);
	std::cout << "Please set the nickname" << std::endl;
	std::cin >> x;
	if (!std::cin)
		exit(1);
	this->_contact[i].setNickName(x);
	std::cout << "Please set the Phone number" << std::endl;
	std::cin >> x;
	if (!std::cin)
		exit(1);
	this->_contact[i].setPhoneNumber(x);
	std::cout << "Please set the darkest secret" << std::endl;
	std::cin >> x;
	if (!std::cin)
		exit(1);
	this->_contact[i].setDarkestSecret(x);
	return 0;
}

int PhoneBook::ContactSearch(int i)
{
	int j = 0;

	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	if (this->first_occurence == 0)
	{
		while (j < 8)
		{
			std::cout << "|" << std::setw(10) << j << "|";
			this->_contact[j].print_data(this->_contact[j].getFirstName());
			std::cout << "|";
			this->_contact[j].print_data(this->_contact[j].getLastName());
			std::cout << "|";
			this->_contact[j].print_data(this->_contact[j].getNickName());
			std::cout << "|" << std::endl;
			j++;
		}
	}
	else
	{
		while (j < i)
		{
			std::cout << "|" << std::setw(10) << j << "|";
			this->_contact[j].print_data(this->_contact[j].getFirstName());
			std::cout << "|";
			this->_contact[j].print_data(this->_contact[j].getLastName());
			std::cout << "|";
			this->_contact[j].print_data(this->_contact[j].getNickName());
			std::cout << "|" << std::endl;
			j++;
		}
	}
	std::string x;
	std::cin >> x;
	if (!std::cin)
		exit(1);
	if (x[0] >= '8')
	{
		std:: cout << "please enter a good index" << std::endl;
		return (1);
	}
	else if (x.length() > 1)
	{
		std::cout << "problem with your index" << std::endl;
		return (1);
	}
	else if (x[0] < 48 || x[0] > 57)
	{
		std::cout << "problem with your index" << std::endl;
		return (1);
	}
	int index = x[0] - 48;
	std:: cout << "Here is the information of the " << x[0] << std::endl;
	std:: cout << "first name: " << this->_contact[index].getFirstName() << std::endl;
	std:: cout << "last name: " << this->_contact[index].getLastName() << std::endl;
	std:: cout << "Nick name: " << this->_contact[index].getNickName() << std::endl;
	std:: cout << "Phone number: " << this->_contact[index].getPhoneNumber() << std::endl;
	std:: cout << "Darkest secret: " << this->_contact[index].getDarkestSecret() << std::endl;
	return (0);
}
