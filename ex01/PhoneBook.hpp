#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
	public:
	PhoneBook(void);
	int PhoneBook::contact(void);
	~PhoneBook(void);

	private:
	Contact	_contact[8];
};

#endif