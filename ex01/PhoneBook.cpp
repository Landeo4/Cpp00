#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int PhoneBook::contact(void)
{
	std::cout << "donc la je peux modifier mes valeurs" << std::endl;
	this->_contact->setFirstName("Jean-Luc");
	this->_contact->getFirstName();
	return 0;
}
